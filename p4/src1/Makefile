CFLAGS += -I../headers -L../lib
SRC = rkw.c

prog1: ${SRC} ../lib/libusux.a
	${CC} ${CFLAGS} -o $@ ${SRC} -lusux -lm

clean:
	rm -f *.o
