#include <stdlib.h>

/* This function fills a string with a certain character Leaves the nth (final) character as \0.
    The destination argument is also the return value */
char *strfill_n(char *dest, size_t n, char fill);

/* This function mishes and mashes two input strings
    If that is somehow unclear just look at the example:
    str1: "rice"    -> "rbio"
    str2: "bowling" -> "cweling" */
void strmishmash_n(char *str1, size_t n1, char *str2, size_t n2);

/* Returns the sum of the ascii values in the input string */
long strsum_n(char *s, size_t n);