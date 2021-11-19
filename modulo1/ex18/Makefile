# A simple Makefile
main: compress_shorts.o main.o
	gcc compress_shorts.o main.o -o main

compress_shorts.o: compress_shorts.c
	gcc -g -Wall -c compress_shorts.c -o compress_shorts.o
		
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main