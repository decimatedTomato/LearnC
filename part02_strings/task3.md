# Task 3 - Silly goofy string functions

Heap memory access can often be slower than stack, because variables can be all over the heap resulting in cache misses. Don't worry about all that, the point is there are still plenty of situations in which you would rather just rely on the stack. I mean in the previous question I was just creating a whole new string so I could guarantee it would fit the input strings, and copying lots of values is not that fast.
<br>But we had to do that because there was no way for the function to detect how much space was left in the input arrays. But what if I told you, there could be?

Lets store the array length in another variable and pass it into the functions as an argument!

But what kind of functions should we make?
I know! How about you follow the interface in the goofy.h header file.

Just this once I'll even lay out the compilation command for you:
`gcc oh damn I don't remember`

In this case when you do something to a string you can take into account not only the null terminator (which counts as the end of the string) but also the length argument. As long as the length is entered correctly we can avoid some safety issues.