# A simple Makefile
main: find_word.o main.o
	gcc find_word.o main.o -o main

find_word.o: find_word.c
	gcc -g -Wall -c find_word.c -o find_word.o
		
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main