#include <stdio.h>

int main() {
    int x, y;
    scanf("%x", &x);
    scanf("%x", &y);
    unsigned mask = 0Xff;
    int z = (x & mask) + (y & ~mask);
    printf("%.8X\n", z);
}