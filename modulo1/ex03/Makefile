# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = sum_even.h
SOURCES = sum_even.c main.c
OBJFILES = sum_even.o main.o
EXEC = prog_sum_even

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
