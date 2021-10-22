# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = copy_vec.h
SOURCES = copy_vec.c main.c
OBJFILES = copy_vec.o main.o
EXEC = prog_copy_vec

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
