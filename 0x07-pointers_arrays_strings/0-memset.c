
Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming (master)
$ cd 0x07-pointers_arrays_strings

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ ls

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ ls

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ cat > README.md
A new project on ponters and arrays

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ cat > 0-memset.c

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming (master)
$ cd 0x07-pointers_arrays_strings

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ ls

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ ls

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ cat > README.md
A new project on ponters and arrays

Abyssiniaaa@Abyssinia MINGW64 ~/alx-low_level_programming/0x07-pointers_arrays_strings (master)
$ cat > 0-memset.c
#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
