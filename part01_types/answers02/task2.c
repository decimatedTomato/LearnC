#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a = 0xDEAD;
    printf("%d %f %e %c %x %o\n", a, a, a, a, a, a);

    int money_amount_in_cents;
    printf("%zu\n", sizeof(money_amount_in_cents));
    unsigned int someones_age;
    printf("%zu\n", sizeof(someones_age));
    char text[100];
    printf("%zu\n", sizeof(text));
    float grass_length_average;
    printf("%zu\n", sizeof(grass_length_average));
    enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;
    printf("%zu\n", sizeof(enum DayOfWeek));
    unsigned int color[3];
    printf("%zu\n", sizeof(color));
    char tab;
    printf("%zu\n", sizeof(tab));
    bool settings[10];
    printf("%zu\n", sizeof(settings));
    double distance_moon_earth;
    printf("%zu\n", sizeof(distance_moon_earth));
    
    return 0;
}