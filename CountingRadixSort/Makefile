main: 	main.o	lib.o
	gcc main.o lib.o -o main

main.o: main.c
	gcc -c main.c

lib.o:	lib.c	lib.h
	gcc -c lib.c

clean:
	rm *.o

