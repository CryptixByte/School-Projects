all: bithacking
.PHONY: all

bithacking: main.o bithacking.o
main.o: main.c bithacking.h
bithacking.o: bithacking.c  bithacking.h

.PHONY: clean
clean:
	rm -f bithacking main.o bithacking.o

