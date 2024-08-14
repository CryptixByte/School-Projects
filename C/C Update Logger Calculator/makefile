all: Memory
.PHONY: all

Memory: main.o Memory.o
main.o: main.c Memory.h
Memory.o: Memory.c Memory.h

.PHONY: clean
clean:
	rm -f Memory main.o Memory.o
