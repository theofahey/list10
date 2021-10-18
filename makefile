all: simplelist.o
	gcc -o simplelist simplelist.o
simplelist.o: simplelist.c simplelist.h
	gcc -c simplelist.c  simplelist.h
run:
	./simplelist
