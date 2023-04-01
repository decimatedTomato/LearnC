# Task 2 - Handling strings safely

>Ok, in all likelihood your previous answer is actually contains a drastic vulnerability that makes your program dangerous to use by a programmer and cataclysmic in the hands of a user. <font color="orange">Why do you think that is?</font>

Well the main reason those functions were not safe is that it was very easy to supply input strings larger than the size of the destination string. In effect you could write data into unknown memory resulting in undefined behavior.

Some examples of dangerous inputs include:
- An uninitialized string
- A character array without a null terminator
- A null pointer (we will get to [that](../../part04_pointers/))

In the new implementation I made the following changes:
- Added a new memory allocation
- Copied contents from both strings into the new allocation.
- Performing nullpointer checks (we haven't covered [proper error handling](../../part09_handling_errors/) yet)

For my solution I made a helper function:
```c
size_t my_strlen(char *str) {
    if (str == NULL) return 0;
    size_t length = 0;
    while (str[length]) length++;
    return length;
}
```
It is often useful to extract simple repetitive behavior into smaller code units like this to keep the logic flow of the larger functions more clear. You might have heard of the OOP principle encapsulation. Unlike a private function in java we cannot make our helper functions inaccessible by other files. That could lead to some problems in which a function that makes sense within the context of one file, does not make sense when used in another module.

If you wanted to go further you could even extract another function out of this code segment:
```c
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
```
Each of these loops in which the string contents are copied to the result string could be handled in another function.

```c
char *my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
```

```c
char *my_strcat_s(char *src1, char *src2) {
    size_t len1 = my_strlen(src1);
    char *result = malloc(len1 + my_strlen(src2) + 1);
    my_strcpy(result, src1);
    my_strcpy(result + len1, src2);
    return result;
}
```
You have to pass a pointer to the end of the copied src1 into the second copy statement of course.
<br>When programming it can be almost overwhelming how many different solutions exist for a given problem. It can be scary but this freedom is also what makes programming into a kind of artistic expression.

An interesting challenge would be to make a variadic strcat function (Takes in variable number of arguments).