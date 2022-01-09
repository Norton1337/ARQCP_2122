main: main.o add_byte.o
	gcc -Wall -g main.o add_byte.o -o main

main.o: main.c add_byte.h
	gcc -Wall -g -c main.c -o main.o

add_byte.o: add_byte.c
	gcc -Wall -g -c add_byte.c -o add_byte.o

run: main
	./main

clean:
	rm *.o main
