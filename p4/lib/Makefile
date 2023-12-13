CFLAGS += -I../headers -L../lib
SRC = pierw.c delta.c

libusux.a: ${SRC}
	${CC} ${CFLAGS} -c $^
	ar rcs libusux.a *.o

clean:
	rm -f *.o
