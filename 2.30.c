#include "stdio.h"

int tadd_ok(int x, int y) {
    printf("%d + %d = %d\n", x, y, x + y);
    if (x > 0 && y > 0) {
        return x + y > 0;
    } else if (x < 0 && y < 0) {
        return x + y < 0;
    }
}

int main() {
    int x = 0x7fffffff;
    int y = 0x7fff0001;
    printf("%d\n", tadd_ok(x, y));
    printf("%d\n", tadd_ok(0x80000000, 0x8000f000));
    printf("%d\n", tadd_ok(12, 12));
    return 0;
}