#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    struct Person {
        char name[100];
        unsigned int age;
        float height;
        char favorite_letter;
    };

    struct Humanoid {
        union identifier {
            char name[100];
            unsigned long int serial_number;
        } identifier;
        unsigned int age;
        float height;
        char favorite_letter;
    };

    return 0;
}