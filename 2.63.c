#include <stdio.h>

unsigned srl(unsigned x, int k) {
    unsigned xsra = (int)x >> k;
    int w = sizeof(x) << 3;
    return ((1 << (w - k)) - 1) & xsra;
}

int sra(int x, int k) {
    int xsrl = (unsigned)x >> k;
    int w = sizeof(x) << 3;
    int mask = -1 << (w - k);
    int m = 1 << (w - 1);
    mask &= !(x & m) - 1;
    return mask | xsrl;
}

int main() {
    printf("srl(%.8X, 4): %.8X\n", -1, srl(-1, 4));
    printf("sra(%.8X, 4): %.8X\n", 0x80000000, sra(0x80000000, 4));
    printf("sra(%.8X, 4): %.8X\n", 0x10000, sra(0x10000, 4));
}