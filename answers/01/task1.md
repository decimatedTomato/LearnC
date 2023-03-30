# Task 1 - Data types (How to represent that?)

`int money_amount_in_cents;`

You might initially think that since money often represented as `$#.##` (including decimal places) that a floating point number is the best representation. That's not a great idea when it comes to money because money should not be created or lost during a transaction, but the floating point format necessitates imprecision in favor of a dynamic range see [Simon dev's explanation](../../part01_types/resources.md#extra).

`unsigned int someones_age;`

It doesn't really make sense for someone's age to be negative so I chose to add the unsigned property (do not provide representations for illegal states). You should be aware when subtracting unsigned types, in this case people's ages, that if the result is stored in an unsigned variable this may cause an integer underflow and wrap around to the integer maximum see [Computerphile's explanation](../../part01_types/resources.md#extra).

`char text[100];`
`float grass_length_average;`
`enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;`
`unsigned int color[3];`
`char tab;`
`bool settings[10];`
`double distance_moon_earth;`