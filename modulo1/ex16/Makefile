# A simple Makefile
main: where_exists.o main.o
	gcc where_exists.o main.o -o main

where_exists.o: where_exists.c
	gcc -g -Wall -c where_exists.c -o where_exists.o
		
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main