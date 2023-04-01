# Task 4 - The Piston []-|

Okay, the challenge of The Piston []-| was twofold.
1. Generate a random number
2. Make sure it is within the specified range

First I found the containing variable type that fit the requirements.
<br>In stdint.h are a number of fixed size numeric types that can be used to get around the different c implementations. If only, every c implementation featured all of the stdint definitions. I think they at least include uint_least64_t, at least I hope so because its what I would have used.

Why not just use `unsigned long long int`? Well I'm not sure, they are pretty much the same thing. I can't really tell the length just from looking I guess. The point of the exercise is actually to mentally prepare for a situation where you use a numeric type from an API in the future.

In order to get a random number I used `rand()` from stdlib.h. The implementations of `rand()` have been known to be bad approximations of randomness. They should not be used for cryptographic purposes, but we should be fine. For me RAND_MAX is defined as 32767 which is 15 random bits. It is possible to use this information to compose a nicely random number in an efficient manner, but thats not what I did. I just took a random bit 64 times and composed them into a number.

```c
for (size_t i = 0; i < 64; i++) {
    val = (val * 2) | (rand() % 2);
}
```
In the above code block is the code that repeatedly generates random bits.
<br>By multiplying val by 2 the current bits are shifted once to the left. Then the bitwise or operation allows us to add a new bit to the number while retaining the existing ones.
<br>By using the modulo operation it is possible to recieve a single bit from `rand()`. This is useful because the actual number of bits returned by the function is dependent on different libc implementations. 