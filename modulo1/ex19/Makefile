# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = find_word.h
SOURCES = find_word.c main.c
OBJFILES = find_word.o main.o
EXEC = prog_find_word

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
