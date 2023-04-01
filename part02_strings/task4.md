# Task 4 - Filtering characters

Oftentimes we need to parse strings for use at a later stage in a program. As a general rule in software, user input is one of the most mind-numbingly terrifying threats we are forced to deal with. Can you imagine the ideal beautiful world if programs never had to interact with the outside world. Sigh.

For the next stage I'll give you access to a libc library "[ctype.h](resources.md#standard-c-string-library)". Some of the functions will be helpful for the following functions.
<br>Write 3 functions that will check (return true/false) whether a given input string conforms to the following functions:
- All alphabetic characters are in uppercase
- Contains only alphanumeric characters
- String contains fewer alphabetic characters than numeric characters

<font color="orange">Create 3 functions that check for the arbitrary restrictions described above.</font>

Maybe its not enough to simply invalidate strings, we might have to extract the stuff we want out of a somewhat usable input string.

This time <font color="orange">create a function that returns a copy of a string with only its space and numeric characters.</font>