main: main.o changes.o
	gcc -Wall -g main.o changes.o -o main

main.o: main.c changes.h
	gcc -Wall -g -c main.c -o main.o

changes.o: changes.c
	gcc -Wall -g -c changes.c -o changes.o

run: main
	./main

clean:
	rm *.o main
