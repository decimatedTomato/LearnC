#include <stdlib.h>

char *strfill_n(char *dest, size_t n, char fill) {
    if (dest == NULL) return NULL;
    for (size_t i = 0; i < n; i++) {
        if (dest[i] == '\0') break;
        dest[i] = fill;
    }
    return dest;
}

size_t my_strlen(char *str, size_t n) {
    if (str == NULL) return 0;
    size_t length = 0;
    while (str[length] && length < n) length++;
    return length;
}
char *my_memcpy(char *dest, char *src, size_t n) {
    for (size_t i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

void strmishmash_n(char *str1, size_t n1, char *str2, size_t n2) {
    if (str1 == NULL || str2 == NULL) return;
    size_t len1 = my_strlen(str1, n1);
    size_t len2 = my_strlen(str2, n2);
    char *buffer = malloc(len1 + len2);
    size_t c1 = 0, c2 = 0;
    for (size_t i = 0; i < len1 + len2; i++) {
        if (c1 >= len1) {
            buffer[i] = str2[c2++];
        } else if (c2 >= len2) {
            buffer[i] = str1[c1++];
        } else {
            buffer[i] = ((i % 2 == 0) ?  str1[c1++] : str2[c2++]);
        }
    }
    my_memcpy(str1, buffer, len1);
    my_memcpy(str2, buffer + len1, len2);
    free(buffer);
}

long strsum_n(char *str, size_t n) {
    if (str == NULL) return 0;
    long sum = 0;
    int i = 0;
    while (str[i]) {
        sum += str[i];
        i++;
    }
    return sum;
}