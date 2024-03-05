#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned b) {

    unsigned mask = ~(0xFF << (i << 3));

    return (x & mask) | (b << (i << 3));
}

int main() {
    printf("%.8X\n", replace_byte(0x12345678, 2, 0xAB));
    printf("%.8X\n", replace_byte(0x12345678, 0, 0xAB));
}