# A simple Makefile
main: frequencies.o main.o
	gcc frequencies.o main.o -o main

frequencies.o: frequencies.c
	gcc -g -Wall -c frequencies.c -o frequencies.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main

