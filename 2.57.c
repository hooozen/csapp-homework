#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_short(short x) { show_bytes((byte_pointer)&x, sizeof(x)); }
void show_long(long x) { show_bytes((byte_pointer)&x, sizeof(x)); }
void show_double(double x) { show_bytes((byte_pointer)&x, sizeof(x)); }

int main() {
    short x = 12345; // 0x3039
    show_short(x); 
    long y = 12345; // 0x0000000000003039
    show_long(y);
    double z = 12345; // 0x40C81C8000000000
    show_double(z);
}
