#include "stdio.h"

int tadd_ok(int x, int y) {
    printf("%d + %d = %d\n", x, y, x + y);
    if (x > 0 && y > 0) {
        return x + y > 0;
    } else if (x < 0 && y < 0) {
        return x + y < 0;
    }
    return 1;
}

int tsub_ok(int x, int y) {
    printf("x: %d,  y: %d\n", x, y);
    printf("x: %d, -y: %d\n", x, -y);
    return tadd_ok(x, -y);
}

int main() {
    int x = 0x80000000;
    int y = 0x1;
    printf("%d - %d: %d\n", x, y, tsub_ok(x, y));
    x = 0x4fffffff;
    y = 0x4fffffff;
    printf("%d - %d: %d\n", x, y, tsub_ok(x, y));
    x = 0xffffffff;
    y = 0x80000000;
    printf("%d - %d: %d\n", x, y, tsub_ok(x, y));
}
