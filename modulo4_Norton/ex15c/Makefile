main: main.o activate_bits.o
	gcc -Wall -g main.o activate_bits.o -o main

main.o: main.c activate_bits.h
	gcc -Wall -g -c main.c -o main.o

activate_bits.o: activate_bits.s
	gcc -Wall -g -c activate_bits.s -o activate_bits.o

run: main
	./main

clean:
	rm *.o main
