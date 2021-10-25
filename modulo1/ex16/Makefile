# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = where_exists.h
SOURCES = where_exists.c main.c
OBJFILES = where_exists.o main.o
EXEC = prog_where_exists

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
