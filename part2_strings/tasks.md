In order to get used to string behavior let us recreate some libc functions.
I'm going to entirely ignore the existence of multi-byte and wide characters (rip non latin alphabet bozos).
Its not because I hate you, it is because I am afraid (I don't think wchar are the same across different compilers).
Also, I know that pointers is the next topic but we do need to use them now, sorry.

# Task 1 - Strings on the stack

We can allocate memory on the stack (like normal) or on the heap (freak behavior <3). Since its not always clear how long text needs to be, strings are often allocated on the heap. That way they can also be initialized within a function call and passed back by return pointer.
<br>"Why can't you just return a pointer to something allocated on the stack?"
[EXTREMELY LOUD INCORRECT BUZZER]
<br>If you do that to something allocated on the stack it will immediately go out of scope which is undefined behavior (it may be overwritten the next time you call a function).

Array declaration on stack:
<br>`char str[100];`

Array declaration on heap:
<br>`char *str = malloc(100);`

First declare some fun strings on the stack (make them fun media references, that way you will enjoy yourself and be happy :). Remember that since we are dealing with null terminated strings here there should always be one more byte than the number of visible characters (I just know you were about to forget about '\0' but I wasn't gonna let that happen to my little guy).

Horrific way to declare and initialize strings:
<br>`char str[69] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', '\0'}`

Sane use of string literals
<br>`char str[54] = "That's right Jesse, I guess I finally am breaking bad";`

You might be wondering how to add invisible control characters to string literals.

Anyway, here's your first task, and it is a useful one

Create a function strcat(), that takes in two strings and appends the contents of one string to the other. Maybe make it return something, I'm not a cop.