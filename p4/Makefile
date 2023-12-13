CC = gcc
CFLAGS = -O2

all:
	cd lib; make
	cd src1; make
	cd src2; make

clean:
	cd lib; make clean
	cd src1; make clean
	cd src2; make clean

install:
	mkdir -p ./bin
	cp src1/prog1 ./bin
	cp src2/prog2 ./bin
