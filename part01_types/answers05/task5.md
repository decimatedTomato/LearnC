# Task 5 - Grouping data

```c
struct Humanoid {
    bool is_human;
    union identifier {
        char name[100];
        unsigned long int serial_number;
    } identifier;
    unsigned int age;
    float height;
    char favorite_letter;
};
```
In this case the is_human field tracks which identifier we would use for this Humanoid. We can either pull out the name or serial number using the dot notation.
```c
struct Humanoid Alexa;
h.identifier.name;
h.identifier.serial_number;
```
I legitimately don't know many uses for unions. In most cases where a union is used you also have to store the currently used field of the union. Unions are almost always used in conjunction with a struct.

They are sometimes used in low level programming in order to get a higher degree of control over individual bits and bytes. Othertimes they are used to try to achieve a sort of primative polymorphism in which one struct can have more than one type of behavior. [Othertimes](../resources.md#extra) it is known that only one of the two values would need to be used at a time, and the context changes over the lifetime of the struct. In those cases a union prevents a waste of space.