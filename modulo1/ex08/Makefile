# A simple Makefile
main: array_sort2.o main.o
	gcc array_sort2.o main.o -o main

array_sort2.o: array_sort2.c
	gcc -g -Wall -c array_sort2.c -o array_sort2.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main

