#include <stdio.h>

typedef unsigned char *byte_pointer;

int is_little_endian() {
    short x = 1; // 0x0001
    if (((byte_pointer)&x)[0] == 1)
        return 1;
    return 0;
}

int main() { printf("%d\n", is_little_endian()); }