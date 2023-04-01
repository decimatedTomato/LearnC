# Task 3 - Silly goofy string functions

//TODO explanations


Here lies the skeleton of my first solution attempt.
```c
if (str1 == NULL || str2 == NULL) return;
char *buffer1 = malloc(my_strlen(str1, n1)); // No need to save room for the buffer
char *buffer2 = malloc(my_strlen(str2, n2)); // Since know the length already
my_memcpy(buffer1, str1, n1);
my_memcpy(buffer2, str2, n2);
size_t fill1 = 0, fill2 = 0;
for (size_t i = 0; i < n1 + n2; i++) {
    if (fill1 >= n1) {
        // add to str2
        str2[fill2] = buffer2[fill2];
    } else {
        // add to str1 for evens, str2 for odds
        if(i % 2 == 0) {
            str1[i / 2] = buffer
        }
    }
}
free(buffer1);
free(buffer2);
```