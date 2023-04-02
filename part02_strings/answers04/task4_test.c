#include "task4.h"
#include <stdio.h>
#include <stdlib.h>

#define IN_GREEN(s)  "\033[32;1m" s "\033[0m"
#define IN_YELLOW(s) "\033[33;1m" s "\033[0m"
#define IN_RED(s)    "\033[31;1m" s "\033[0m"

#define TEST(X) ({ \
    if(X) { \
        tests_passed++; \
        printf("Test %zu "IN_GREEN("PASSED")"\n", tests_passed + tests_failed); \
    } else { \
        tests_failed++; \
        printf("Test %zu "IN_RED("FAILED")"\n", tests_passed + tests_failed); \
    } \
})

/* Tests the following functions */
/* This function returns whether or not all alphabetic characters of str are in uppercase */
bool alph_upper(char *str);

/* This function returns whether all characters of str are alphanumeric */
bool all_alphanumeric(char *str);

/* This function returns whether there are more numeric characters than alphabetic ones */
bool more_number_less_letter(char *str);

/* This function returns a copy of str which only includes its space and numeric characters */
char *numeric_substring(char *str);


bool alph_upper_t1() {
    return alph_upper("");
}
bool alph_upper_t2() {
    return alph_upper("A");
}
bool alph_upper_t3() {
    char test_str[41];
    for (size_t i = 0; i < 41; i++) test_str[40 - i] = i;
    return alph_upper(test_str);
}
bool alph_upper_t4() {
    return !alph_upper("HHHHHHHHHHEELLLo");
}
bool alph_upper_t5() {
    return alph_upper("DIE BÄUME WACHSEN");
}
bool alph_upper_t6() {
    return !alph_upper("JA öüä");
}

// bool all_alphanumeric_t1();
// bool all_alphanumeric_t2();
// bool all_alphanumeric_t3();
// bool all_alphanumeric_t4();
// bool all_alphanumeric_t5();

// bool more_number_less_letter_t1();
// bool more_number_less_letter_t2();
// bool more_number_less_letter_t3();
// bool more_number_less_letter_t4();
// bool more_number_less_letter_t5();

// bool numeric_substring_t1();
// bool numeric_substring_t2();
// bool numeric_substring_t3();
// bool numeric_substring_t4();
// bool numeric_substring_t5();

int main() {
    size_t tests_passed = 0;
    size_t tests_failed = 0;

    TEST(alph_upper_t1());
    TEST(alph_upper_t2());
    TEST(alph_upper_t3());
    TEST(alph_upper_t4());
    TEST(alph_upper_t5());
    TEST(alph_upper_t6());

    // TEST(all_alphanumeric_t1());
    // TEST(all_alphanumeric_t2());
    // TEST(all_alphanumeric_t3());
    // TEST(all_alphanumeric_t4());
    // TEST(all_alphanumeric_t5());

    // TEST(more_number_less_letter_t1());
    // TEST(more_number_less_letter_t2());
    // TEST(more_number_less_letter_t3());
    // TEST(more_number_less_letter_t4());
    // TEST(more_number_less_letter_t5());

    // TEST(numeric_substring_t1());
    // TEST(numeric_substring_t2());
    // TEST(numeric_substring_t3());
    // TEST(numeric_substring_t4());
    // TEST(numeric_substring_t5());

    // Calculate and report success percentage
    printf("\n%zu Tests passed\n%zu Tests failed\n", tests_passed, tests_failed);
    float rate = 100 * (float)tests_passed / (float)(tests_passed + tests_failed);
    char rate_str[7];
    sprintf(rate_str, "%.2f", rate); 
    if (rate < 50) {
        printf(IN_RED("%s%%"), rate_str);
    } else if (rate < 80) {
        printf(IN_YELLOW("%s%%"), rate_str);
    } else {
        printf(IN_GREEN("%s%%"), rate_str);
    }
    printf(" success rate\n");
}