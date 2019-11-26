all: parse.o main.o
	gcc -o program parse.o main.o

main.o: parse.h main.c
	gcc -c -g main.c


parse.o: parse.c
	gcc -c -g parse.c

run:
	./program

clean:
	rm *.o
