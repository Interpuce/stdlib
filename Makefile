CC = gcc
CFLAGS = -Wall -nostdlib -m32 -nostartfiles -ffreestanding -Iinclude -c
AR = ar
ARFLAGS = rcs

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,obj/%.o,$(SRC))

all: $(OBJ) archive

obj/%.o: src/%.c | obj
	$(CC) $(CFLAGS) $< -o $@

obj/%/%.o: src/%.c | obj
	$(CC) $(CFLAGS) $< -o $@

obj:
	mkdir -p obj

archive: $(OBJ)
	$(AR) $(ARFLAGS) alibc.a $(OBJ)

clean:
	rm -rf obj alibc.a
