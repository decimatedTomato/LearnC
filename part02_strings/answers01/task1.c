#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(char *str) {
    size_t length = 0;
    while (str[length]) length++;
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

    char nothing_to_see_here[20] = "my brother in christ they are misbegotten chimera and you're going to die";
    
    // printf("%s\n", nothing_to_see_here);
    // for (size_t i = 0; i < 74; i++) {
    //     printf("index %d -> %c\n", i, nothing_to_see_here[i]);
    // }

    // The compiler actually truncates this string initialization because it can tell that it is illegal
    // The 21st character is set to a null terminator
    //  that doesn't solve the safety issue since a subsequent memory allocation can easily rewrite it
    
    char *drink_tea = malloc(69);
    for (size_t i = 0; i < 68; i++) {
        drink_tea[i] = (i % 2) ? 'a' : 'h';
    }
    drink_tea[68] = '\0';
    
    // Custom strlen invocation
    printf("length of string '%s' is %zu\n", mantra, my_strlen(mantra)); // 51
    printf("length of string '%s' is %zu\n", nothing_to_see_here, my_strlen(nothing_to_see_here)); //20
    printf("length of string '%s' is %zu\n", drink_tea, my_strlen(drink_tea)); //68

    // Custom strcat invocation
    printf("fun new string I made '%s'\n", my_strcat(nothing_to_see_here, drink_tea));

    free(drink_tea);
    return 0;
}