all: build

.PHONY: build
build:
	gcc locusts.c -lncurses -o locusts

clean:
	-rm locusts-*.zst
	-rm -r src/
	-rm -r pkg/
	-rm locusts
