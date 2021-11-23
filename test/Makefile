main: main.o nota.o min_max_notas.o
	gcc -Wall -g main.o nota.o min_max_notas.o -o main

main.o: main.c nota.h
	gcc -Wall -g -c main.c -o main.o

min_max_notas.o: min_max_notas.s
	gcc -Wall -g -c min_max_notas.s -o min_max_notas.o
	
nota.o: nota.c min_max_notas.h
	gcc -Wall -g -c nota.c -o nota.o

run: main
	./main

clean:
	rm *.o main
