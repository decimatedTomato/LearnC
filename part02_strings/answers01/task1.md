# Task 1 - Strings on the stack

I hope you understand my shoddy c-string explanation. It is something to get your head around that the strlen can be different from the length of the containing memory allocation.

`str[length]` has the same boolean value as `str[length] != '\0'` or `str[length] != 0`.
An if or while statement will interpret any non-zero value as true. Since I wanted to count the elements of str until I found a null terminator, and the null terminator has a value of zero the code could be shortened.

Programmers generally like to keep their code as concise as possible to the point that the terseness can get in the way of readability (see the [haskell language](../resources.md#much-more-elegant-language-than-c)).

```c
size_t my_strlen(char *str) {
    size_t length = 0;
    while (str[length]) length++;
    return length;
}
```
In order to perform string operations you often have to traverse from the 'head pointer' to the nearest null terminator. In my solutions I used an index variable (length, i and j) since I thought it would come naturally to someone who has dealt with array indexing before. The alternative (which makes more sense in certain situations) is to "walk the pointer".

Instead of writing `if (str[i] != '\0') i++;` you might say `if (*str != '\0') str++;`.

An advantage of this approach, is that if you need to return a pointer to a differnt substring of str you can just return this pointer once it has walked to the correct location. The approach is also often applied to datastructures where the stride is more than 1 since incrementing a pointer will increment the pointer by the size of data stored within the pointer.


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
char drink_tea[] = malloc(69);
...
free(drink_tea);
```
I freed my malloced memory because I am a good citizen ^_^.