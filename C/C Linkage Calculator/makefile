all: linkage
.PHONY: all

linkage: main.o linkage.o linkages.o
main.o: main.c linkage.h
linkage.o: linkage.c linkage.h
linkages.o: linkages.s


.PHONY: clean
clean:
	rm -f linkage main.o linkage.o linkages.o
