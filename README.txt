Student name: Elhacen Elmoustapha Student ID:5119176


Linux Installation and Practice (25 pts)
1.1. I have already installed Ubuntu 20.04 LTS.However, sometimes I experience problems with storage. I am planning on making my PC Linux based by overwriting Window 11 to get maxmum performence/storage.  
1.2. Learn 10 List of linux commands lines

	1. pwd command - This command is used to show the current directory/folder.  It returns an absolute path. 
	
	2. cd commmand - This command is used to move in different directory.  It can accept a name of sub/directory or an absolute path to a directory. 
	For example: cd /home/elhacen/Desktop/CPractice or  cd CPractice will move directory CPractice.
	It also has three version: cd .., cd , cd - 
	cd .. command take move to the parent of current directory. cd command takes you directly to home directory. cd - This command line change the current directory to the previous directory the user was in. 
	
	3. ls command - This command line is used to show all files or directories in the current working folder/directory. It can also accept an absolute path. 
	This command line can accept three types of arguements. ls -R, ls -a, ls -al. ls -R return all files in the sub-directories of working directory.
	ls -a show all hiden files. ls -al will return all files and subdirectories in the working directory. It return informations such as permissions, size, owner, ect for each file 
	and subdirectory. 
	4. cat command- this command is used to output the content of a file on the terminal. it accepts one arguement which is the name of the file including its extenction. 
	for example, if there a c file called linklist.c, cat linklist.c command line would print the content of the file on the terminal screen. 
	This command line can also be used to create file. if we want to create a file called linkist.c , we can run cat > linkis.c.
	It can also be used to join two files and store the out of the result in a new file. For example, cat file1 file2>file3 would add file1 and file2 and store the result in a new 
	file3 and output  the result on the terminal. 
	
	5. cp command - This command line can be used to create a copy of files in the current directory into another directory. 
	For example, cd screenshot.jpg /home/elhacen/Pictures will create a copy of the screenshot.jpg into the Picture folrder. 
	
	6. mv command - This command can be used to move files/directories from location to another location. It also has two functions, renaming folder/file or mvoing group of files/folder to different  directory. mv file.txt /home/elhacen/Documents will move file.txt the Documents folder. mv file1.txt file2.txt will change file1 name to file2. 
	
	
	7.  mkdir command - this command can be used to create a new directory/folder. For example, mkdir would create Fall20222 would create a directory named Fall2022 in the current working/relative directory.
	This command can also take relative path as arguement. For example, mkdir Music/CSE420, will create a folder called CSE420 inside the Music directory. This can also be used to create a directory between two  directories. For exmaple, mkdir -p Music/Fall/Folder1 will creat Fall which is the child of Music but the parent of Folder1. 
	
	8. rmdir command - this command line can be used to delete an empty directy within a directory. The directory must be empty for this command to work. 
	
	9. touch command - this command can be used to create a blank file with an extention. For example, to create a c file, the command would be touch NewFile.c
	
	10. diff command - this command can be used to compare two files. It will output the line that do not match of both of the files. 
	
1.3. When I run the command uname -r, it return 5.15.0-46-generic which is the current running kernal version on my Ubuntu(version 5). 
the excutable corresponding to my kernal version is called vmlinuz-5.15.0-46-generic. the file path to  this kernal file is elhacen@elhacen-elmoustapha:/boot$

1.4 top directories:
    arch:this forlder contains the code related to the architecuture. this means that each arch has its own arch folder.
	block:this contain code for device driver sudsch ID and SCSI based devices.
	certs:This enables multiple services to use the same certificate without overly complicated file permission
	Documention: this folder contains documention related to all directies in the linux distrubtion. 
	direvers: this folder contains most of codes related to prephiral devices. Those devices include video drivers, keyboard, graphic cards,ect...
	crypto: The is a folder that contain API for cryptogrophy which is used by the Kernal .
    fs: this directory has generic code for working with filesystem in general Example of filesystme here include the root filesystem. 
	include:this directry include header files that can be used the c programe.
	init:This directory contains  main.c, version.c, and code whic is used for creating "early userspace"
	ipc:nter-Process Communication": this directories has the code for shared memory/semaphores. 
	kernal:This folder contain most code for kernal functionalities such signal handling , system call. 
	lib:this folder  contains kernel modules and those shared library images (the C programming code library) needed to boot the system and run the commands in the root filesystem
	Lincenses: this folder include 
	mm: this folder contain code for high level memory management. This include but not limited to memory maping for files, memory allocation, page caching, ect. 
	net: this folder contian code for higer lever networking management. This inlcuded information for networking including protocols such as IPV4 (IP version 4)
	samples: this folder cotains samples of the linxu modules that other peoeple can use 
	scripts:this directory contain code that are used in building the kernal.
	security: this folder contian code for many security modules needed for linux.  
	sound:this folder contains the code for sound drivers and any related to sound in general.
	tools:
	usr: this directory cotains code for creating a root filesystem image in cpio format, which will be used for early userspace.
	virt:contains a vhost test module;


1.5 my arch is x86_64


# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/syscall.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"

# 1 "<stdin>" 3 4


  system calls 
0	common	read			sys_read  8	i386	creat			sys_creat
8	common	lseek			sys_lseek
57	common	fork			sys_fork
90	common	chmod			sys_chmod
327	64	preadv2			sys_preadv2
location:/home/elhacen/Desktop/Tarball/linux-5.15.67/arch/x86/entry/syscalls


2.3.Tracing System Calls (5 pts)
read
write
close
fstat
mmap
mprotect
munmap
brk
pread64
access
execve
arch_prctl
openat


4 Performance Analysis (5 pts)

    
    this for in_easy.txt
	---------output--------------
    time ./empsort in.txt out.txt 
	real	0m0.003s 
	user	0m0.001s
	sys	    0m0.003s
	------------------------------

	this for in_mediume.txt
	--------output----------------
	real	0m0.328s
	user	0m0.323s
	sys	    0m0.005s
	------------------------------

	this is for in_hard.txt
	--------output----------------
    real	0m1.583s
	user	0m1.543s
	sys	    0m0.033s


    The following is the time it takes to run all cases(in easy, in medium, in hard ) using . 
    this is the time it takes to run all test case using ./test.sh
   
    time ./test.sh
    --------output-----------------
    real	0m2.089s
    user	0m2.031s
    sys	    0m0.059s




Source: https://courses.linuxchix.org/kernel-hacking-2002/08-overview-kernel-source.html
https://tldp.org/LDP/Linux-Filesystem-Hierarchy/html/c23.html
https://ubuntu.com/server/docs/security-certificates#:~:text=The%20default%20location%20to%20install,%2Fssl%2Fcerts%2Fcacert.



