all: calculator
.PHONY: all

calculator: main.o calculator.o
main.o: main.c calculator.h
calculator.o: calculator.c calculator.h

.PHONY: clean
clean:
	rm -f calculator main.o calculator.o