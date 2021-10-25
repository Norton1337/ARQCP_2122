# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = compress_shorts.h
SOURCES = compress_shorts.c main.c
OBJFILES = compress_shorts.o main.o
EXEC = prog_compress_shorts

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
