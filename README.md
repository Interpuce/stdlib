# STD library for AurorOS

A rewrite of standard C libary (stdlib) for AurorOS purposes.

> [!IMPORTANT]
> This is not source code of AurorOS, which can be found at [official repo](https://github.com/Interpuce/AurorOS) after first public release.

## Compiling applications to AurorOS

You can now create object files. The example is here:

```gcc -c filename -o filename.o -nostdlib -nostartfiles -ffreestanding -I"path/to/std/include"```

If you are using excluded `src/` directory as workarea for your application and `src/main.c` as main file, try this command:

```gcc -c src/main.c -o src/main.o -nostdlib -nostartfiles -ffreestanding -Iinclude```