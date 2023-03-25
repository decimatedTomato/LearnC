There won't be any tests for these tasks (I don't know how to do that yet). After you finish how about you compare your answers to mine: https://github.com/decimatedTomato/LearnC/blob/teacher/part1%20types

# Task 1 - Data types

In c, a variable type matters a great deal, they appear at the very start of a variable declaration, before even the variable name. A sensible way of thinking through a program is to consider what sort of data you might need and a sensible way to organize data is through the type system.

There are many types in c, the same binary string can be interpreted and used in many different ways.
Assign a value to an identifier and print 6 times using various format specifiers using printf.

Create 6 variables of various types, print them as well as their size.

# Task 2 - How to represent that?

Create a series of variables which have types that are practical to represent:
- someone's age
- text
- a day of the week
- a color
- a tab [    ] <- like that
- a list of true/false settings
- the distance between the moon and the earth

# Task 3 - Colors of the rainbow

My first programming teacher once said, "Programs only exist to visualize data, nothing more." (or something like that). Let's take his word for it and come up with some very common custom types of our own.
- A color that contains the r, g, b, a components
- A position in 3d space
- A set of vertices in 3d space
- A set of vertices, each including an associated color
Initialize a variable using a single keyword that represents the final type.
Hint: A concept known as type aliasing might come in handy here

Just so you know, there are actually several valid ways of representing these things. Well maintained documentation and consistency within a codebase are some deciding factors that determine whether an internal representation of a concept makes sense.

# Task 4 - The piston []--|

Since c is a language that must remain fast when run on sorts of hardware the language sometimes conforms to the specific platform --and compiler-- that some software is targeted at. There is no guarantee that all basic types will always be represented in the same way on different devices.

Your goal is to output a series of instructions to a pistoning machine.
The embedded device can only handle data of the form 64-bit integers.
Generate a series of 100 random numbers and feed them into the program's output, they should be within the range of 0-2^64.
Hint: A search through the datatypes available in the standard library might reveal a tool that simplifies this task.

When interfacing with other types of hardware, an API (Application Programming Interface) will often define its own c types which fit the target hardware well.

# Task 5 - Grouping data

Thank gorsh we are not limited to homogeneous data structures in c. Create a type that represents a person with all of the most important data (name, age, height, favorite ascii character).

Ah shite, I made a mistake before. This data structure is not supposed to be for storing only humans, but robots too! It should be one datastructure, of the same size as it already was (we don't have room for redundant data). Robots don't have names though, they have serial numbers.