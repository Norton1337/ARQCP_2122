# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = upper2.h
SOURCES = upper2.c main.c
OBJFILES = upper2.o main.o
EXEC = prog_upper2

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
