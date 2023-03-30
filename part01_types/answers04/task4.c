#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint_least64_t val = 0;
    for (size_t i = 0; i < 100; i++) {
        for (size_t i = 0; i < 64; i++) {
            val = (val * 2) | (rand() % 2);
        }
        printf("%llu\n", val);
    }
    return 0;
}