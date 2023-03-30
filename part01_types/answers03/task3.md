# Task 3 - Colors of the rainbow

`typedef unsigned int Color[4];`

This typedef is just a convenience, allowing the programmer to picture types in terms of how they are used, rather than the underlying data representation. They are quite nice.

```c
typedef struct Point {
    float x, y, z;
} Point;
```
Typedefs are not needed in order to declare and use structs, unions or enums but they simplify writing code.
<br>Instead of writing `struct Point new_point` you can just write `Point new_point` as if Point were a regular built-in type.

The anonymous struct may have a cleaner syntax.
```c
struct Point {
    float x, y, z;
}
```
You might also not want to pollute the namespace of your file with all kinds of short-lived types.
<br>But, when it comes to recursive definitions ([foreshadowing](../../part04_pointers/)) a named struct is needed. Once again we have to deal with syntax created after the fact in order to add functionality to an earlier version of c.

```c
typedef struct Colorful_Point {
    Point p;
    Color col;
} Colorful_Point;
```
The ability to compose types using other types is pretty neat.