#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint_least64_t val;
    for (size_t i = 0; i < 100; i++) {
        val = rand();
        printf("%ld\n", val);
    }
    return 0;
}