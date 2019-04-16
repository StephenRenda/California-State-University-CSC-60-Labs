# Sample Makefile
# Remember: each command line starts with a TAB
grades: lab5.o class_stats.o
	gcc -o grades lab5.o class_stats.o

lab5.o: lab5.c lab5.h
	gcc -c lab5.c

class_stats.o: class_stats.c lab5.h
	gcc -c class_stats.c	
