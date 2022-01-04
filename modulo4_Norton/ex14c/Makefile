main: main.o activate_bit.o
	gcc -Wall -g main.o activate_bit.o -o main

main.o: main.c activate_bit.h
	gcc -Wall -g -c main.c -o main.o

activate_bit.o: activate_bit.s
	gcc -Wall -g -c activate_bit.s -o activate_bit.o

run: main
	./main

clean:
	rm *.o main
