main: main.o fillStudent.o
	gcc -Wall -g main.o fillStudent.o -o main

main.o: main.c fillStudent.h info.h
	gcc -Wall -g -c main.c -o main.o

fillStudent.o: fillStudent.c info.h
	gcc -Wall -g -c fillStudent.c -o fillStudent.o

run: main
	./main

clean:
	rm *.o main
