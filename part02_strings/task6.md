# Task 6 - String distance

There are a lot of [different ways to calculate distances](resources.md#different-distances) and they allegedly serve lots of useful purposes. But a pretty interesting one I want to use for today's trial is the [levenshtein distance](resources.md#levenshtein-difference).

Have you ever wondered how an ide autocomplete guesses what variable you are halfway done writing? How about when Google serves you the correct results even though you made a typo? I have no idea how they do it but if I had to solve those problems I might make use of the levenshtein distance.

The levenshtein (or edit) distance between two strings is equal to the number of edits that needs to be made to one string in order to transform it into the second string. Lots of string distance metrics can be defined by adding or removing possible edit operations.
<br>Here is the set of operations that Vladimir Levenshtein chose to allow:
1. Inserting a new character
2. Deleting a character
3. Replacing a character

<font color="orange">Create a function that takes in two strings and returns the levenshtein difference.</font>

Solutions to this problem tend to make use of [recursion](resources.md#recursion). Also in computer science you don't have to reinvent the wheel, you are allowed to learn other people's algorithms (although you might learn more if you try things for yourself).

The autocomplete feature of an ide might be implemented by a [trie data structure](resources.md#auto-complete) or it could use a type of [fuzzy string search](resources.md#fuzzy-search) which requires a string distance metric such as the one we just decided on.