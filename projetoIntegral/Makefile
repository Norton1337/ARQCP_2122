main: main.o US301.o
	gcc -Wall -g main.o US301.o divideByComma.o printArray.o printMatrix.o putRestWithZero.o -o main

main.o: main.c US301.h
	gcc -Wall -g -c main.c -o main.o

US301.o: US301.s
	gcc -Wall -g -c US301.s -o US301.o
	
divideByComma.o: divideByComma.c divideByComma.h
	gcc -Wall -g -c divideByComma.c -o divideByComma.o
	
printArray.o: printArray.c printArray.h
	gcc -Wall -g -c printArray.c -o printArray.o
	
printMatrix.o: printMatrix.c printMatrix.h
	gcc -Wall -g -c printMatrix.c -o printMatrix.o
	
putRestWithZero.o: putRestWithZero.c putRestWithZero.h
	gcc -Wall -g -c putRestWithZero.c -o putRestWithZero.o
	

run: main
	./main

clean:
	rm *.o main
