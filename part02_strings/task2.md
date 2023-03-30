# Task 2 - Handling strings safely

Ok, in all likelihood your previous answer is actually contains a drastic vulnerability that makes your program dangerous to use by a programmer and cataclysmic in the hands of a user. <font color="orange">Why do you think that is?</font>

The way that I have, in the past avoided this situation was by initializing arrays to have excessively large sizes. That's definitely not the best or only solution. User your knowledge of the heap to <font color="orange">create another function my_strcat_s() which takes two strings as parameters and returns a pointer to a brand new string located in the heap.</font>

Since you're messing around in the heap now, I do hope that you will free all of your pointers at some point (•_•) .