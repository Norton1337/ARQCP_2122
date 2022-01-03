main: main.o pontuacoes.o aprovacoes.o
	gcc -Wall -g main.o pontuacoes.o aprovacoes.o -o main

main.o: main.c pontuacoes.h aprovacoes.h
	gcc -Wall -g -c main.c -o main.o
	
pontuacoes.o: pontuacoes.s
	gcc -Wall -g -c pontuacoes.s -o pontuacoes.o

aprovacoes.o: aprovacoes.s pontuacoes.h
	gcc -Wall -g -c aprovacoes.s -o aprovacoes.o
	
run: main
	./main

clean:
	rm *.o main
