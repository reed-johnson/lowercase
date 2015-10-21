all: main.o islc.o
	cc -o lowercase main.o islc.o

main.o: main.c islc.h
	cc -c main.c

islc.o: islc.c islc.h
	cc -c islc.c

clean:
	rm *.o
	rm lowercase
