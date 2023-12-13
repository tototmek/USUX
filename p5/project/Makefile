CC = gcc
CFLAGS = -O -I./headers
OBJECTS = foo.o bar.o prog.o 

prog : $(OBJECTS)
	$(CC) -o $@ $^
clean:
	rm -f $(OBJECTS)
