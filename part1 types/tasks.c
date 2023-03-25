#include <stdio.h>
#include <stdint.h>

int main() {
    // Data types
    int a = 0xDEAD;
    printf("%d %f %e %c %s %x", a, a, a, a, a, a);

    // How to represent that?
    unsigned int someones_age;
    char text[20];
    enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;
    unsigned int color[3];
    char tab;
    _Bool settings[10];
    double distance_moon_earth;


    printf("%u\n", sizeof(int));
    printf("%u\n", sizeof(float));

    return 0;
}
