# Task 1 - Data types (How to represent that?)

`int money_amount_in_cents;`

You might initially think that since money often represented as `$#.##` (including decimal places) that a floating point number is the best representation. That's not a great idea when it comes to money because money should not be created or lost during a transaction, but the floating point format requires imprecision 

`unsigned int someones_age;`
`char text[100];`
`float grass_length_average;`
`enum DayOfWeek { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } day;`
`unsigned int color[3];`
`char tab;`
`bool settings[10];`
`double distance_moon_earth;`