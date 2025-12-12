
# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lm

SRC = main.c
EXE = programa

$(EXE): $(SRC)
    $(CC) $(CFLAGS) $(SRC) -o $(EXE) $(LDFLAGS)

clean:
    rm -f $(EXE)
