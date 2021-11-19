# A simple Makefile
main: power_ref.o main.o
	gcc power_ref.o main.o -o main

power_ref.o: power_ref.c
	gcc -g -Wall -c power_ref.c -o power_ref.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o main

run: main
	./main

