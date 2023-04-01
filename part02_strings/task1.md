# Task 1 - Strings on the stack

In order to get used to string behavior let us recreate some libc functions.
I'm going to entirely ignore the existence of multi-byte and wide characters (rip non latin alphabet bozos).
Its not because I hate you, it is because I am afraid (I don't think wchar are treated the same way across different compilers).
Also, I know that "pointers" has not been covered yet but we do need to use them now, sorry.

The most important thing to understand is that there is no string type in c.
<br>When people talk about c-strings they are actually talking about a vanilla array of type char, with an additional requirement of a null terminator. The null terminator, written '\0' is a useful character with the integer value of 0, kind of like a null pointer. In the case of strings, the end of a string is marked with this character, even if the string has more space allocated to it than is being used (After an array is declared in c, it is impossible for the code to determine how long the array is [Actually it is possible but only within the function body that the array was declared in]).
<br>This is in contrast to the string type in languages like c or java which actually use some sort of struct with a character array as well as a length property.

We can allocate memory on the stack (vanilla) or on the heap (freak behavior <3). Since its not always clear how long text needs to be, strings are often allocated on the heap. That way they can also be initialized within a function call and passed back by return pointer([we're almost there](../part04_pointers/)).
<br>"Why can't you just return a pointer to something allocated on the stack?"
<br>**[EXTREMELY LOUD INCORRECT BUZZER]**
<br>If you do that to something allocated on the stack it will immediately go out of scope which is undefined behavior (it may be overwritten the next time you call a function [Well unless its a pointer that you got from a function argument meaning that the pointer was not owned by the function that just got resolved]).

Array declaration on stack:
<br>`char str[100];`

Array declaration on heap:
<br>`char *str = malloc(100);`

First <font color="orange">declare some fun strings on the stack (make them fun media references</font>, that way you will enjoy yourself and be happy :). Remember that since we are dealing with null terminated strings here there should always be one more byte than the number of visible characters (I just know you were about to forget about '\0' but I wasn't gonna let that happen to my little guy).

Horrific way to declare and initialize strings:
<br>`char str[69] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', '\0'}`

Sane use of [string literals](resources.md#string-literals):
<br>`char str[53] = "MEIN HERZ IN FLAMMEN, WILL DICH LIEBEN UND VERDAMMEN";`

String literals (anything wrapped in double quotes) are immutable and stored in the data segment. If you want a mutable string you have to first create the memory allocation and then copy the contents of the literal inside.

You might be wondering how to add invisible control characters to string literals. Anyway, here's your first real task, and it is a useful one:

<font color="orange">Create a function my_strlen() that takes in a string and returns its length (size_t).</font>

<font color="orange">Create a function my_strcat(), that takes in two strings and appends the contents of one string to the other.</font> Maybe make it return something, I'm not a cop.