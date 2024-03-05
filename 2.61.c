#include <limits.h>
#include <stdio.h>

int main() {
    int nums[6] = {0, ~0, 0x12FF, 0xFE, 0x010000FF, 0x010000FE};
    int w = sizeof(INT_MAX) << 3;

    for (unsigned i = 0; i < 6; i++) {
        int x = nums[i];
        int res = !~x                           // A
                  || !x                         // B
                  || !((x & 0xFF) ^ 0xFF)       // C
                  || !((unsigned)x) >> (w - 8); // D

        printf("%d\n", res);
    }
}