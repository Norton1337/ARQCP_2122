main: main.o count_bits_zero.o
	gcc -Wall -g main.o count_bits_zero.o -o main

main.o: main.c count_bits_zero.h
	gcc -Wall -g -c main.c -o main.o

count_bits_zero.o: count_bits_zero.c
	gcc -Wall -g -c count_bits_zero.c -o count_bits_zero.o

run: main
	./main

clean:
	rm *.o main
