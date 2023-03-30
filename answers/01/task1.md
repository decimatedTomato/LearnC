# Task 1 - Data types (How to represent that?)

`int money_amount_in_cents;`

You might initially think that since money often represented as `$#.##` (including decimal places) that a floating point number is the best representation. That's not a great idea when it comes to money because money should not be created or lost during a transaction, but the floating point format necessitates imprecision in favor of a dynamic range see [Simon dev's explanation](../../part01_types/resources.md#extra).

`unsigned int someones_age;`

It doesn't really make sense for someone's age to be negative so I chose to add the unsigned property (do not provide representations for illegal states). You should be aware when subtracting unsigned types, in this case people's ages, that if the result is stored in an unsigned variable this may cause an integer underflow and wrap around to the integer maximum see [Computerphile's explanation](../../part01_types/resources.md#extra).

`char text[100];`

This is an array of one byte characters. We'll get more into it in the [strings section](../../part02_strings/). One thing to note is that you probably shouldn't use a constant value like 100 here. Instead you can define an appropriately named [constant](../../part06_preprocessor/) so that if multiple parts of the program rely on the exact length of this text they are easily kept consistent with eachother. The use of so called 'magic numbers' (literal values without an explanation for what they represent or why they were chosen) is often a bug in the making.

`float grass_length_average;`

You might be wondering, "if a double is a larger and more precise value than a float, why use float". The added precision of a double simply isn't needed in many cases. It just takes up more space, and processors are often more optimized to calculate float operations than higher precision operations (this is especially relevant in [graphics](../../part08_graphics/)).

`enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;`

Here I chose to represent the day of the week as an [enum](../../part01_types/resources.md#enumerated-types). To put it simply, an enum is an int, but while programming only the values that have been declared to exist (MONDAY=0, TUESDAY=1, etc.) are visible during assignment. This is mostly a convenience feature, but it can help detect potential bugs and clarify the meaning of otherwise meaningless numbers (much like constants).
<br>You might be wondering why not to use a string, since it can represent all of these states, while communicating the value extremely clearly.
- For one, strings in c are complicated and their size would be dependent on the largest needed string.
- We already know all possible days of week, so strings take up lots of redundant space.
- But more importantly strings are extremely flimsy. There are many causes for string comparisons to mismatch
    - If you ever create a typo
    - If you ever mess up capitalization
    - If you ever forget about regional differences in spelling
<br>Your ide may contain a linter which will not warn you about unexpected string values, but can detect invalid enum values.

`unsigned int color[3];`

Colors can be represented in very many ways, not only in code but also in real life. Are we talking about the level of CMYK pigments, RGB light, literal wavelengths of light, or very specific hues. All of these make sense as different datatypes.
<br>You could use an array of integers as I decided to. If you want to have access to components using the dot notation maybe a [struct](../../part01_types/resources.md#data-structures) would be better. But in some cases you might want to pack all of those color values into one int. This might reduce the level of precision for each color value, but the human eye does not have infinite color resolution anyway, and neither do computer monitors.

`char tab;`

This was kind of a silly use case for char. As far as I can tell chars are rarely used outside of char arrays ([strings](../../part02_strings/)). Since they are exactly one byte long, casting a value into a char array is fairly common so that precise byte manipulation tricks can be used. Otherwise, how often do you need the precision of exactly 1 byte?

`bool settings[10];`

Since the original c specification did not include bools (1 bit is fairly impractical when the smallest addressable memory unit is much larger) ints were used. People often defined their own bool types like so `typedef bool enum { FALSE, TRUE }` or simply used 0 and 1. Because of the range of approaches, the c standard could not add a `bool` keyword at a later date, or risk breaking old codebases. Instead they added `_Bool` which served the same purpose (The underscore, capital notation is often used for later c additions so you should avoid using it for your own variables. It indicates a c reserved word). Nevertheless, inclusion of the stdbool.h can give you access to the bool label as well as true and false.

Is it actually a good idea to store settings in a bool array like this. It sure is memory efficient. This does depend on only storing a set of on/off settings which may not be the case (especially for settings that depend on previous settings).
<br>In reality programmers would often use a single unsigned int, where each bit corresponds to a certain flag. This lets packing lets you quickly check if any flag is set, or reset all flags to 0. You can also define a set of constants corresponding to bits which gives the flags visible meaning. See the [CodeVault video](../../part01_types/resources.md#extra) on the topic.

`double distance_moon_earth;`

When it comes to very precise calculations like solar objects a higher degree of precision is surely required. In practice I hope that NASA has even more complicated types that handle their required precision better than doubles.