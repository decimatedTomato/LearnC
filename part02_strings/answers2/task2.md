# Task 2 - Handling strings safely

>Ok, in all likelihood your previous answer is actually contains a drastic vulnerability that makes your program dangerous to use by a programmer and cataclysmic in the hands of a user. <font color="orange">Why do you think that is?</font>

Well the main reason those functions were not safe is that it was very easy to supply input strings larger than the size of the destination string. In effect you could write data into unknown memory resulting in undefined behavior.

