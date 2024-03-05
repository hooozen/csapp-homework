#include <stdio.h>

int main() {
    unsigned x = 0xffffffff;
    printf("%u(%d) < 0 ?: %s\n", x, x, x < 0 ? "True" : "False");
}