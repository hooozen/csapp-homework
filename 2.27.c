#include "stdio.h"

int uadd_ok(unsigned x, unsigned y) { return x + y >= x; }

int main() {
    printf("%d\n", uadd_ok(0xffffff00, 0xfffffff0));
    printf("%d", uadd_ok(10, 8));
}