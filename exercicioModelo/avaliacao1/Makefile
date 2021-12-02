main: main.o calcula_resto.o noves_fora.o
	gcc -Wall -g main.o calcula_resto.o noves_fora.o -o main

main.o: main.c noves_fora.h
	gcc -Wall -g -c main.c -o main.o

calcula_resto.o: calcula_resto.s
	gcc -Wall -g -s calcula_resto.s -o calcula_resto.o
	
noves_fora.o: noves_fora.c calcula_resto.h
	gcc -Wall -g -c noves_fora.c -o noves_fora.o

run: main
	./main

clean:
	rm *.o main
