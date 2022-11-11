#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdbool.h>

struct Node
{
 int  EmployeeID ;
 char *FirstName;
 char *LastName;
 int Age;
 int LuckyNumber;
 struct Node *next;
 struct Node *prev;
};

struct List
{
  struct Node *head;
  struct Node *tail;
};
struct Node *create_node(int Age,int LuckyNumber, int EmployeeID,char *FirstName,char*LastName)
{
  struct Node *node = malloc(sizeof(struct Node));
  if (node == NULL)
  {
    fprintf(stderr, "%s: Couldn't create memory for the node; %s\n", "linkedlist", strerror(errno));
    exit(-1);
  }
  node->FirstName = strdup(FirstName);
  node->LastName = strdup(LastName);
  node->EmployeeID = EmployeeID;
  node->Age = Age;
  node->LuckyNumber = LuckyNumber;
  node->next = NULL;
  node->prev = NULL;
  return node;
}

struct List *create_list()
{
  struct List *list = malloc(sizeof(struct List));
  if (list == NULL)
  {
    fprintf(stderr, "%s: Couldn't create memory for the list; %s\n", "linkedlist", strerror(errno));
    exit(-1);
  }
  list->head = NULL;
  list->tail = NULL;
  return list;
}
bool compare(struct Node *Ptr,struct Node *NewNode){
   if(NewNode->Age>Ptr->Age){
         return true;
    } 
    else if(Ptr->Age==NewNode->Age){
         if(Ptr->LuckyNumber>NewNode->LuckyNumber){
          
         return true;
    }
    else if(Ptr->LuckyNumber==NewNode->LuckyNumber){
      if(NewNode->EmployeeID>Ptr->EmployeeID){
        return true;
      }
         
     }
    }  
    return false;
}

void Insert(struct Node *Ptr, struct Node *Employee, struct List *list){
       
      
        if(Ptr->prev==NULL)
            {
                
                Employee->next = list->head;
                list->head->prev = Employee;
                list->head = Employee;        
             }
             else 
             { 
               Employee->prev = Ptr->prev;
               Ptr->prev->next= Employee;
               Ptr->prev = Employee;
               Employee->next = Ptr;
             }
               
       
   
}
void print_list(struct List *list)
{

  struct Node *ptr = list->head;
  while (ptr != NULL)
  {
    if (ptr != list->head)
    {

      printf("\n");
    }
    ptr = ptr->next;
  }
  printf("\n");
}
void Sort_insert(struct Node *Employee, struct List *list)
{      
       struct Node *ptr = list->head;
       if(list->head==NULL){
        list->head = Employee;
        list->tail=Employee;
       }
        else if(!compare(list->tail,Employee))
              {

               list->tail->next = Employee;
               Employee->prev = list->tail;
               list->tail = Employee;
              }    
       else {
          while(ptr!=NULL)
          {     
                if(compare(ptr,Employee)){
                  
                  Insert(ptr,Employee, list); 
                  break;          // how maintain the data of node(data:prev/next) ptr is currently pointed to by ptr?  
                }
                ptr=ptr->next;

          }

       }
             
}


void destroy_list(struct List *list)
{
  struct Node *ptr = list->head;
  struct Node *tmp;
  while (ptr != NULL)
  {
    free(ptr->FirstName);
    free(ptr->LastName);
    tmp = ptr;
    ptr = ptr->next;
    free(tmp);
  }
  free(list);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Incorrect argument list: format is ./read_sample_dynamic_buffer input_file output_file");
        exit(EXIT_FAILURE);
    }
    struct List *Employeelist = create_list();
    struct Node *employee = malloc(sizeof(struct Node));
    struct Node *temp;
    FILE *fp = fopen(argv[1], "r");
    FILE *outfile;
    outfile = fopen(argv[2], "w");
    printf("Printing to %s\n", argv[2]);

    if (fp == NULL) {
        fprintf(stderr, "%s: Couldn't open the file %s\n", argv[1], strerror(errno));
        exit(-1);
    }
    while (fscanf(fp, "%d %ms %ms %d %d", &employee->EmployeeID,&employee->FirstName, &employee->LastName,&employee->Age,&employee->LuckyNumber) ==5) {
          
           temp = create_node(employee->Age,employee->LuckyNumber,employee->EmployeeID,employee->FirstName,employee->LastName);
           Sort_insert(temp,Employeelist);
           free(employee->FirstName);
           free(employee->LastName);
     
    }
    free(employee);
    struct Node *ptr = Employeelist->head;
    int count = 0;
    while (ptr != NULL)
    {
    if (ptr != Employeelist->head)
    {
          count++;
    }
    fprintf(outfile,"%d,%d,%d,%s,%s,%d\n", ptr->Age,ptr->LuckyNumber,ptr->EmployeeID,ptr->FirstName,ptr->LastName,count);

    ptr = ptr->next;

    }
    destroy_list(Employeelist);
    fclose(fp);
    fclose(outfile);
    return(EXIT_SUCCESS);
}
