CC=gcc
TARGET=ascii85i
CFLAGS=-I.
LIBS = -lm
DEPS = ascii85.h
OBJ  = ascii85.o ascii85i.o 

default: all

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o
