#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    // Data types
    int a = 0xDEAD;
    printf("%d %f %e %c %x %s", a, a, a, a, a, a);

    int v1;
    printf("v1 %d %u\n", v1, sizeof(v1));
    unsigned char v2;
    printf("v2 %c %u\n", v2, sizeof(v2));
    float v3;
    printf("v3 %f %u\n", v3, sizeof(v3));
    _Bool v4;
    printf("v4 %i %u\n", v4, sizeof(v4));
    struct Penis { short shaft; double balls } v5;
    printf("v5 %d %g %u\n", v5.shaft, v5.balls, sizeof(v5));
    float _Complex v6;
    printf("v6 %f %f %u\n", creal(v6), cimag(v6), sizeof(v6)); // Yeah I'm showing off knowledge, what of it?
    

    // How to represent that?
    int money_amount_in_cents;
    unsigned int someones_age;
    char text[100];
    float grass_length_average;
    enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;
    unsigned int color[3];
    char tab;
    _Bool settings[10];
    double distance_moon_earth;

    // Colors of the rainbow
    typedef unsigned int Color[4];
    typedef struct Point {
        float x, y, z;
    } Point;
    typedef Point vertices_set[10];

    typedef struct Colorful_vertices_set {
        Point p;
        Color c;
    } Colorful_vertices_set[10];

    Colorful_vertices_set set1;
    for (size_t i = 0; i < 10; i++) {
        Point p1 = { .x = 0, .y = 1, .z = 2 };
        set1[i].p = p1;
        set1[i].c[0] = 0xFF;
        set1[i].c[1] = 0x77;
        set1[i].c[2] = 0x23;
        set1[i].c[3] = 0xFF;
    }

    // The piston []-|
    uint_least64_t val;
    for (size_t i = 0; i < 100; i++) {
        val = random();
        printf("%ld\n", val);
    }
    
    // Grouping data
    typedef struct Person {
        char name[100];
        unsigned int age;
        float height;
        char favorite_letter;
    } Person;

    typedef struct Humanoid {
        union identifier {
            char name[100];
            unsigned long int serial_number;
        } identifier;
        unsigned int age;
        float height;
        char favorite_letter;
    } Humanoid;
    

    return 0;
}