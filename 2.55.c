#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

int main() {
    int x = 12345; // 0x00003039
    show_bytes((byte_pointer)&x, sizeof(x));
    float y = 12345; // 0x4640E400
    show_bytes((byte_pointer)&y, sizeof(y));
    void *z = 12345;
    show_bytes((byte_pointer)&z, sizeof(z));
}
