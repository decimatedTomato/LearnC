# Task 3 - Silly goofy string functions

Heap memory access can often be slower than stack, because variables can be all over the heap resulting in cache misses. Don't worry about all that, the point is there are still plenty of situations in which you would rather just rely on the stack. I mean in the previous question I was just creating a whole new string so I could guarantee it would fit the input strings, and copying lots of values is not that fast.
<br>But we had to do that because there was no way for the function to detect how much space was left in the input arrays. But what if I told you, there could be?

Lets store the array length in another variable and pass it into the functions as an argument!

But what kind of functions should we make?
I know! How about you follow the interface in the goofy.h header file.

Just this once I'll even lay out the compilation command for you:
`gcc task3.c goofy.c`

In this case when you do something to a string you can take into account not only the null terminator (which counts as the end of the string) but also the length argument. As long as the length is entered correctly we can avoid some safety issues.

<font color="orange">Create some sample strings in part3.c. Fill out the functions in goofy.c according to their signatures in goofy.h. Then invoke those functions in part3.c using the sample strings you created. Print the strings before and after invoking the functions. In order to use functions across multiple files compile them in one statement.</font>

Remember that you can reuse one function within the body of another. The recursive nature of programming tasks is what make them amazingly satisfying. But then you remember the [horrors](resources.md#the-horrors).