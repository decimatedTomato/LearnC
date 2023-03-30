# Task 2 - Printing values

```c
int a = 0xDEAD;
printf("%d %f %e %c %x %o", a, a, a, a, a, a);
```
Here I used a hexadecimal notation in order to set the int. Hexadecimal, decimal, octal, binary are not different datatypes, they are rather different ways to express the underlying binary data.
<br>Many people like the hexadecimal notation because it carries a lot of information in few characters (think of hexcodes for colors) but also because you can spell words like DEAD, BEEF and C0DE, and programmers are just so silly.

I did consider printing a as a string:
```c
#include <string.h>
int main() {
    int a;
    printf("%s", a);
}
```
But this is certainly undefined behavior. In some cases the program will continue reading until it reaches memory it doesn't have access to causing a segmentation fault, or the next character could be empty and it just behaves tamely.

Fun fact: Due to some limitations of earlier versions of c, variadic functions (functions that can take a variable number of arguments) like printf, will implicitly promote any float arguments into doubles. Weird right?

printf (formatted print) actually lets you format the output string in many useful ways that you might overlook:
- `%5d` will pad the number with 5 spaces on the left
- `%03d` will pad the number with at least 3 0s on the left
- `%.3` will limit the number to 3 floating points
- [etc.](../resources.md#outputting-different-types)

These specifiers can be used to output values into a table for example.

`printf("%zu\n", sizeof(money_amount_in_cents));`

The `%zu` formatting is 