all: simplelist.o
	gcc -o simplelist simplelist.o
simplelist.o: simplelist.c
	gcc -c simplelist.c
run:
	./simplelist
