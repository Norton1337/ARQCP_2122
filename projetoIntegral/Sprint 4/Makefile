main: main.o freeMemory.o allocateMemory.o printMatrix.o
	gcc -Wall -g main.o freeMemory.o allocateMemory.o printMatrix.o -o main

main.o: main.c info.h 
	gcc -Wall -g -c main.c -o main.o

freeMemory.o: freeMemory.c info.h
	gcc -Wall -g -c freeMemory.c -o freeMemory.o

allocateMemory.o: allocateMemory.c info.h
	gcc -Wall -g -c allocateMemory.c -o allocateMemory.o

printMatrix.o: printMatrix.c info.h
	gcc -Wall -g -c printMatrix.c -o printMatrix.o

run: main
	./main

clean:
	rm *.o main
