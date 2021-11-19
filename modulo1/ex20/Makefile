# A simple Makefile
main: find_all_words.o main.o
	gcc find_all_words.o main.o -o main

find_all_words.o: find_all_words.c
	gcc -g -Wall -c find_all_words.c -o find_all_words.o
		
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main