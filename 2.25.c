#include "stdio.h"
float sum_elements(float a[], unsigned length) {
    float sum = 0;
    unsigned i;
    for (i = 0; i <= length - 1; i++)
        sum += a[i];
    return sum;
}

int main() {

    float a[2] = {1, 2.3};

    printf("%.1f", sum_elements(a, 2));

    unsigned b = 1;
    printf("%#x", b - 2);

    return 0;
}