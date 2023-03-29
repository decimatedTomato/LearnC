# Task 2 - Printing values

There are many types in c, the same binary string can be interpreted and used in many different ways. What do I mean by this? Go ahead and make an int, then print it as if it were something else.

<font color="orange">Assign a value to an integer and print 6 times using various format specifiers using printf.</font>

A fun compromise c makes with hardware is that the primative types do not have completely known sizes. Integers are defined to be at least 2 bytes (has to do with the smallest addressable memory units). For me they are 4 bytes.

<font color="orange">Copy the variables you made in task1, and print out their sizes.</font>
You can do so using the [sizeof operator](resources.md#basic-variables). This will return a number of the type size_t.

You might be wondering what the difference between size_t and other numeric types is. First of all the name is useful at communicating the idea that this value is the number of bytes of something. It is actually an alias for an unsigned int type (no negative sizes). It is also often larger than an int in order to fit the architectures memory addresses. If you want to use it you might need to include the stdlib.h header file.