# Task 2 - Handling strings safely

>Ok, in all likelihood your previous answer is actually contains a drastic vulnerability that makes your program dangerous to use by a programmer and cataclysmic in the hands of a user. <font color="orange">Why do you think that is?</font>

Well the main reason those functions were not safe is that it was very easy to supply input strings larger than the size of the destination string. In effect you could write data into unknown memory resulting in undefined behavior.

```c
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
```
The most interesting detail here is probably the malloc statement. Since finding the length of either input string is the same process I extracted the behavior into a function. Then I acquired a memory block that was one larger than their combined lengths (space for null terminator). Then I copied the contents of both strings into the output string. Using index variables like this is not the only way to handle iterating through an array. It is fairly common to "walk a pointer".
<br>I'm not really sure which one is better, but since we are handling data with a size of 1 byte that is consecutive in memory the indices work very well.

```c
size_t my_strlen(char *str) {
    size_t length = 0;
    while (str[length]) length++;
    return length;
}
```
In this case I made use of implicit casts.
`str[length]` has the same boolean value as `str[length] != '\0'` or `str[length] != 0`.
An if or while statement will interpret any non-zero value as true. Since I wanted to count the elements of str until I found a null terminator, and the null terminator has a value of zero the code could be shortened.

Programmers generally like to keep their code as concise as possible to the point that the terseness can get in the way of readability (see the [haskell language](../resources.md#much-more-elegant-language-than-c)).
<br>I freed my malloced memory because I am a good citizen ^_^.