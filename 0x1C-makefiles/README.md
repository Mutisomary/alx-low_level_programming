MAKEFILES
A Makefile is a special file used to manage the build process of a program or software project. It contains instructions on how to compile and link the source code files to create the final executable or library. Makefiles are especially useful for larger projects with multiple source files, as they automate the compilation process and help ensure that only the necessary files are recompiled when changes are made.
Here's a basic overview of how to create and use a Makefile for a C language project:
1.	Creating a Makefile: A Makefile is essentially a text file named Makefile (or makefile, with no file extension). Makefiles are written in a specific format that includes rules, targets, and dependencies.
2.	Makefile Components:
•	Targets: These are the things you want to build, like executables or libraries.
•	Dependencies: These are the source code files that the target depends on. If a dependency changes, the target will be rebuilt.
•	Rules: These define how to build a target. They typically consist of a series of commands.
•	Variables: These are used to store values that can be reused in the Makefile, such as compiler options or file names.
3.	Basic Makefile Structure: Here's a simple example of a Makefile for a C program with two source files (main.c and helper.c):

CC = gcc
CFLAGS = -Wall -g

all: myprogram

myprogram: main.o helper.o
    $(CC) $(CFLAGS) -o myprogram main.o helper.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

helper.o: helper.c
    $(CC) $(CFLAGS) -c helper.c

clean:
    rm -f *.o myprogram

In this example:
•	CC is the compiler to be used (gcc).
•	CFLAGS are compiler flags (Wall for warnings, g for debugging info).
•	all is the default target that will be built when you run make without specifying a target.
•	myprogram depends on main.o and helper.o. It's built using the compiler and flags.
•	main.o and helper.o are built from their respective source files using the compiler and flags.
•	clean is a utility target to remove compiled object files and the executable.
4.	Using the Makefile:
•	To build the default target or a specific target: Run make or make target_name.
•	To clean up: Run make clean to remove compiled files.
