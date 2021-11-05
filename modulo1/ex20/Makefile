# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = find_word.h find_all_words.h
SOURCES = find_word.c find_all_words.c main.c
OBJFILES = find_word.o find_all_words.o main.o
EXEC = prog_find_all_words

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
