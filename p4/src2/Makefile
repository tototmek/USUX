CFLAGS += -I../headers -L../lib
SRC = input.c rlin.c

prog2: ${SRC} ../lib/libusux.a
	${CC} ${CFLAGS} -o $@ ${SRC} -lusux -lm

clean:
	rm -f *.o
