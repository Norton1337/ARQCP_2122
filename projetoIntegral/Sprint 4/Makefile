main: main.o freeMemory.o allocateMemory.o printMatrix.o getMax.o divideByComma.o importContainers.o printContainerInfo.o checkRefrigerated.o calculateEnergy.o
	gcc -Wall -g main.o freeMemory.o allocateMemory.o printMatrix.o getMax.o divideByComma.o importContainers.o printContainerInfo.o checkRefrigerated.o calculateEnergy.o -o main

main.o: main.c info.h freeMemory.h allocateMemory.h printMatrix.h getMax.h importContainers.h printContainerInfo.h checkRefrigerated.h calculateEnergy.h
	gcc -Wall -g -c main.c -o main.o

freeMemory.o: freeMemory.c info.h
	gcc -Wall -g -c freeMemory.c -o freeMemory.o

allocateMemory.o: allocateMemory.c info.h
	gcc -Wall -g -c allocateMemory.c -o allocateMemory.o

printMatrix.o: printMatrix.c info.h
	gcc -Wall -g -c printMatrix.c -o printMatrix.o

getMax.o: getMax.c
	gcc -Wall -g -c getMax.c -o getMax.o

divideByComma.o: divideByComma.c
	gcc -Wall -g -c divideByComma.c -o divideByComma.o
	
importContainers.o : importContainers.c info.h
	gcc -Wall -g -c importContainers.c -o importContainers.o

printContainerInfo.o : printContainerInfo.c info.h
	gcc -Wall -g -c printContainerInfo.c -o printContainerInfo.o

checkRefrigerated.o: checkRefrigerated.s
	gcc -Wall -g -c checkRefrigerated.s -o checkRefrigerated.o
	
calculateEnergy.o: calculateEnergy.c
	gcc -Wall -g -c calculateEnergy.c -o calculateEnergy.o
run: main
	./main

clean:
	rm *.o main
