# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = array_sort1.h
SOURCES = array_sort1.c main.c
OBJFILES = array_sort1.o main.o
EXEC = prog_array_sort1

#Suffix rules
.SUFFIXES : .c .o

#How to build and object .o from a code file .c; $< -- prog
.c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
