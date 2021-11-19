# A simple Makefile
main: capitalize.o main.o
	gcc capitalize.o main.o -o main

capitalize.o: capitalize.c
	gcc -g -Wall -c capitalize.c -o capitalize.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main

