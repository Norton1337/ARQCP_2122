main: main.o verifica.o apostas.o
	gcc -Wall -g main.o verifica.o apostas.o -o main

main.o: main.c verifica.h apostas.h
	gcc -Wall -g -c main.c -o main.o
	
verifica.o: verifica.s
	gcc -Wall -g -c verifica.s -o verifica.o

apostas.o: apostas.s verifica.h
	gcc -Wall -g -c apostas.s -o apostas.o
	
run: main
	./main

clean:
	rm *.o main
