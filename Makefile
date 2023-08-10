NAME=tte

CC=gcc

PREFIX=/usr
BINDIR=$(PREFIX)/bin
DESTDIR=$(BINDIR)
OBJ=*.o

tte: tte.o
	$(CC) -o $(NAME) calc.o craft.o tte.o

tte.o:
	$(CC) -c calc.c craft.c tte.c

clean:
	rm -f $(NAME) $(OBJ)

install: tte
	install -D -m 755 $(NAME) $(DESTDIR)/$(NAME)
