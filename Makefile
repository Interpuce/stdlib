CC = gcc
CFLAGS = -Wall -nostdlib -m32 -nostartfiles -ffreestanding -Iinclude -c
LD = ld
LDFLAGS = -r

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,obj/%.o,$(SRC))

all: $(OBJ) archive

obj/%.o: src/%.c | obj
	$(CC) $(CFLAGS) $< -o $@

obj:
	mkdir -p obj

archive: $(OBJ)
	$(LD) $(LDFLAGS) -o alibc.o $(OBJ)

clean:
	rm -rf obj alibc.o
