CC = gcc 
CFLAGS = -Wunreachable-code -ansi -O2 -Wuninitialized -Wall -Wextra 
FILES = src/*.c

default:
	$(CC) $(CFLAGS) $(FILES) -o gereVendas

run:
	$(CC) $(CFLAGS) $(FILES) -o gereVendas
	./gereVendas

clean:
	rm -f gereVendas
	rm -f debug 

debug: 
	gcc $(CFLAGS) $(FILES) -g -o debug
	gdb debug


#  -pedantic -Wunused-parameter -Wall -Wextra 