#include <string.h>
#include <stdio.h>

size_t my_strlen(char *str) {
    size_t length = 0;
    while (str[length]) length++;
    return length;
}
char *my_strcat_s(char *src1, char *src2) {
    char *result = malloc(my_strlen(src1) + my_strlen(src2) + 1);
    int i = 0, j = 0;
    while (src1[i]) {
        result[i] = src1[i];
        i++;
    }
    while (src2[j]) {
        result[i + j] = src2[j];
        j++;
    }
    result[i + j] = '\0';
    return result;
}

int main() {
    char *black = "the red sky fading in the distance";
    char *something_beautiful = "the nightmare hiding";
    char *remember_us = my_strcat_s(black, something_beautiful);
    printf("Combined string '%s'\n", remember_us);
    free(remember_us);
    return 0;
}