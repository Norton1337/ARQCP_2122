# A Makefile with varaibles and suffix rules

#variaveis
INCLUDES = multiplication_table.h multiplication_table_n.h line.h
SOURCES = multiplication_table.c multiplication_table_n.c line.c main.c
OBJFILES = multiplication_table.o multiplication_table_n.o line.o main.o
EXEC = prog

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
