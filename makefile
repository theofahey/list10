all: simplelist.o main.o
	gcc -o simplelist simplelist.o main.o
simplelist.o: simplelist.c simplelist.h
	gcc -c simplelist.c  simplelist.h
main.o: main.c simplelist.h
	gcc -c main.c
	
run:
	./simplelist
