#include <stdio.h>
#include <stdint.h>

int main() {
    // Data types
    int a = 0xDEAD;
    printf("%d %f %e %c %s %x", a, a, a, a, a, a);


    printf("%u\n", sizeof(int));
    printf("%u\n", sizeof(float));

    return 0;
}
