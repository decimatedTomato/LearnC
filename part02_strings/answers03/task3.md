# Task 3 - Silly goofy string functions

The functions i wrote all include a null pointer check as their first line and use the size parameter n to break out of an iteration earlier, in order to prevent issues with missing or purposefully excluded null terminators.
<br>Filling a substring with a character is trivially easy in c.

```c
char *strfill_n(char *dest, size_t n, char fill) {
    if (dest == NULL) return NULL;
    for (size_t i = 0; i < n; i++) {
        if (dest[i] == '\0') break;
        dest[i] = fill;
    }
    return dest;
}
```

You might be wondering why so many string functions return one of the input strings since we don't really need them to. This is just a decision that allows for multiple functions to be invoked in rapid succession without the need to split them across multiple lines.

```c
long strsum_n(char *str, size_t n) {
    if (str == NULL) return 0;
    long sum = 0;
    int i = 0;
    while (str[i] && i < n) {
        sum += str[i];
        i++;
    }
    return sum;
}
```
Since characters are really just numbers that fit within a byte you can just add them directly to a numeric type like a long.

It took me a little bit longer to figure out a nice solution for the strmishmash_n() function. Here lies the skeleton of my first solution attempt.
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

I knew that the input strings would ultimately be modified and that I needed to store them in a buffer, lest some characters that are to be used later were overwritten by an earlier character. I already extracted some repetitive funtionality (copying arrays of data and finding the length of a string) into helper functions. I would continue to use them in my final solution.

At this point I couldn't really picture the solution in my head, so I gave up on my computer and tested some inputs on a piece of paper. The problem was I didn't really understand what the problem statement meant exactly (even though I'm the one who came up with it). After drawing a couple inputs and outputs with a tangle of arrows between them I started to break the problem down.

1. At first you would take characters from the input strings, swapping between them every character
2. For even iterations you would take from str1, and for odd iterations str2
3. The characters would gradually fill up str1, once it was filled the remainder would fill up str2
4. Once all of the characters of one string were depleted the remainder would always come from the other string

Moving the strings into two separate buffers and then ordering them back into the input arrays using the even/odd ruleset did not make sense. The simultaneous focus on the mishmash, and splitting the result into two strings was unintuitive.

I broke the algorithm into two pieces: Ordering the characters and splitting them back into the input strings.
```c
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
```
I allocated a buffer large enough for all of the characters, and then filled it out one iteration at a time.
There are essentially 3 cases that I handled
1. First string has been depleted
2. Second string has been depleted
3. Pick between the first and the second using the evenness of the iteration count

```c
my_memcpy(str1, buffer, len1);
my_memcpy(str2, buffer + len1, len2);
```
Afterwards I copied the buffer in two chunks into the input strings.
```c
char *my_memcpy(char *dest, char *src, size_t n) {
    for (size_t i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}
```
The whole thing seems extremely simple in retrospect. That's one of the odd parts of programming. A problem can start out daunting and at first you don't make much progress. Then you break it down into little trivial chunks, you compose your solution out of those little chunks and bam you finished. It doesn't feel that impressive once you're on the other side.

I think my solution is fairly efficient and pretty readable. I wonder if I'm doing any redundant operations.

Gotta love the post-increment operator <3