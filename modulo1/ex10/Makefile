# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = odd_sum.h
SOURCES = odd_sum.c main.c
OBJFILES = odd_sum.o main.o
EXEC = prog_odd_sum

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
