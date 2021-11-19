# A simple Makefile
main: palindrome.o main.o
	gcc palindrome.o main.o -o main

palindrome.o: palindrome.c
	gcc -g -Wall -c palindrome.c -o palindrome.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main

