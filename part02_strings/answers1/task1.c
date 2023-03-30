#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(char *str) {
    size_t length = 0;
    while (str[length++]);
    return length;
}

char *my_strcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i]) i++;
    while (src[j]) {
        dest[i + j] = src[j];
        j++;
    }
    return dest;
}

int main() {
    // Fun string initializations
    char *mantra = "I think we may have girlbossed too close to the sun";
    char nothing_to_see_here[20] = "my brother in christ they are misbegotten chimera and you're going to die\0";
    char drink_tea[] = malloc(69);
    for (size_t i = 0; i < 68; i++) {
        drink_tea[i] = (i % 2) ? 'a' : 'h';
    }
    drink_tea[68] = 0;
    
    // Custom strlen invocation
    printf("length of string '%s' is %zu\n", mantra, my_strlen(mantra));

    // Custom strcat invocation
    printf("fun new string I made '%s'\n", my_strcat(nothing_to_see_here, drink_tea));

    free(drink_tea);
    return 0;
}