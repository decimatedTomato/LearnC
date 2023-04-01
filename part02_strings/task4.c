#include <stdbool.h>

/* This function returns whether or not all alphabetic characters of str are in uppercase */
bool alph_upper(char *str);

/* This function returns whether all characters of str are alphanumeric */
bool all_alphanumeric(char *str);

/* This function returns whether there are more numeric characters than alphabetic ones */
bool more_number_less_letter(char *str);

/* This function returns a copy of str which only includes its space and numeric characters */
char *numeric_substring(char *str);

int main() {
    return 0;
}