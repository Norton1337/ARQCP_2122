main: main.o nota.o extremos.o
	gcc -Wall -g main.o nota.o extremos.o -o main

main.o: main.c nota.h extremos.h
	gcc -Wall -g -c main.c -o main.o
	
nota.o: nota.s
	gcc -Wall -g -c nota.s -o nota.o

extremos.o: extremos.s extremos.h
	gcc -Wall -g -c extremos.s -o extremos.o
	
run: main
	./main

clean:
	rm *.o main
