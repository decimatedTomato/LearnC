#include "goofy.h"
#include <stdio.h>

/* Create some sample strings in part3.c. Fill out the functions in goofy.c according to their signatures in goofy.h.
Then invoke those functions in part3.c using the sample strings you created.
Print the strings before and after invoking the functions.
In order to use functions across multiple files compile them in one statement. */
int main() {
    size_t len1 = 7;
    char str1[7] = {13, 1, 20, 78, 55, 30, 0};
    // size_t len2 = 30;
    // char str2[30] = "The factory must GROW";
    // size_t len3;
    // char *str3 = "Tick tock on the clock, but the party don't stop";
    // len3 = sizeof(str3) / sizeof(char);

    long sum = strsum_n(str1, len1);
    printf("The sum of the ascii values of %s is %ld\n", str1, sum);
    // sum = strsum_n(str2, len2);
    // printf("The sum of the ascii values of %s is %ld\n", str2, sum);
    // sum = strsum_n(str3, len3);
    // printf("The sum of the ascii values of %s is %ld\n", str3, sum);

    // strfill_n(str3, 10, 'A');
    // printf("After filling a portion of str3 with %c:\n%s\n", 'A', str3);

    // strmishmash_n(str2, len2, str3, len3);
    // printf("%s\n%s\n", str2, str3);

    return 0;
}