#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

/* This function returns whether or not all alphabetic characters of str are in uppercase */
bool alph_upper(char *str) {
    int i = 0;
    while (str[i]) {
        if (isalpha(str[i]) && islower(str[i])) return false;
        i++;
    }
    return true;
}

/* This function returns whether all characters of str are alphanumeric */
bool all_alphanumeric(char *str) {
    int i = 0;
    while (str[i]) {
        if (!isalnum(str[i])) return false;
        i++;
    }
    return true;
}

/* This function returns whether there are more numeric characters than alphabetic ones */
bool more_number_less_letter(char *str) {
    int i = 0, count_numeric = 0, count_alphabetic = 0;
    while (str[i]) {
        if (isdigit(str[i])) count_numeric++;
        else if (isalpha(str[i])) count_alphabetic++;
        i++;
    }
    return count_numeric > count_alphabetic;
}

/* This function returns a copy of str which only includes its space and numeric characters */
char *numeric_substring(char *str) {
    int i = 0, valid_char_count = 0;
    while (str[i]) {
        if (isspace(str[i]) || isdigit(str[i])) valid_char_count++; 
        i++;
    }
    char *copy = malloc(valid_char_count + 1);
    i = 0, valid_char_count = 0;
    while (str[i]) {
        if (isspace(str[i]) || isdigit(str[i])) copy[valid_char_count++] = str[i]; 
        i++;
    }
    copy[valid_char_count] = '\0';
    return copy;
}

// int main() {
//     return 0;
// }