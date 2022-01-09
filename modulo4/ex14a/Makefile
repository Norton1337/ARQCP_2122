main: main.o activate_bit.o
	gcc -Wall -g main.o activate_bit.o -o main

main.o: main.c activate_bit.h
	gcc -Wall -g -c main.c -o main.o

activate_bit.o: activate_bit.c
	gcc -Wall -g -c activate_bit.c -o activate_bit.o

run: main
	./main

clean:
	rm *.o main
