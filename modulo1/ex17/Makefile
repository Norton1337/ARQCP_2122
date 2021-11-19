# A simple Makefile
main: swap.o main.o
	gcc swap.o main.o -o main

swap.o: swap.c
	gcc -g -Wall -c swap.c -o swap.o
		
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main