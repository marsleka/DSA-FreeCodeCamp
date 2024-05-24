CC=g++
CFLAGS=-Wall -g
DEPS= lib.h
OBJ = main.o lib.o
all: program
%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

program: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o program
