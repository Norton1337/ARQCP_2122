main: main.o changes.o
	gcc -Wall -g main.o changes.o -o main

main.o: main.c changes.h
	gcc -Wall -g -c main.c -o main.o

changes.o: changes.s
	gcc -Wall -g -c changes.s -o changes.o

run: main
	./main

clean:
	rm *.o main
