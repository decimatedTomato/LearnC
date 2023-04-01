# Task 5 - Turn that Frown Upside-down Ü

From now on you have full access to the entire c standard library.
<br>Just be aware that many string.h functions will return pointers to sections of an input string (rather than creating a copy). Whether or not the input strings overlap is actually kind of a consideration in c as it affects what kind of [optimizations](resources.md#overlapping-pointers) the compiler can perform.

Now consider this situation. You are in a company and your employees are always sending each other messages where they express emotions with cute little punctuation marks. Unfortunately there has been an epidemic of downright nasty sentiment as of late, unacceptable. Let's turn those frowns upside down.

<font color="orange">Create a function that iterates through a string, and modifies 'frowney faces' into 'smiley faces'.</font>

For the sake of the exercise eliminate these 'frowney faces':
- :-( /  )-:
- :'( /  )':
- :(  /  ):
- :[  /  ]:
- :{  /  }:
- ;(
- D:

These 'smiley faces' on the other hand are what we want to see:
- :-) / (-:
- :') / (':
- :)  /  (:
- :]  /  [:
- :}  /  {:
- ;)
- XD

We don't want to change the contents of the messages too much, there should be the same amount of total 'faces' before and after we make our modifications.
<br>Let's hope the employees never realize our little deception :P.