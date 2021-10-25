# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = populate.h check.h inc_nsets.h
SOURCES = populate.c check.c inc_nsets.c main.c
OBJFILES = populate.o check.o inc_nsets.o main.o
EXEC = prog_ex15

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
