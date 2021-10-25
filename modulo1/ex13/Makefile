# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = where_is.h
SOURCES = where_is.c main.c
OBJFILES = where_is.o main.o
EXEC = prog_where_is

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
