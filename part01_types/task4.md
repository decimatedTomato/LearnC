# Task 4 - The Piston []-|

Since c is a language that must remain fast when run on all sorts of hardware the language sometimes conforms to the specific platform --and compiler-- that some software is targeted at. There is no guarantee that all basic types will always be represented in the same way on different devices.

Let's say you wanted to output a series of instructions to a pistoning machine.
<br>*For reference it looks like this:* []-|

The embedded device can only handle data of the form 64-bit integers.
<font color="orange">Generate a series of 100 random numbers and feed them into the program's output, they should be within the range of 0-2^64.</font>
Hint: A search through the datatypes available in the standard library might reveal a tool that simplifies this task.

When interfacing with other types of hardware, an API (Application Programming Interface) will often define its own c types which fit the target hardware well.