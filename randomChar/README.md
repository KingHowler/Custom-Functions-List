## Description
  ```randomCharInit()``` is the Initializer, You must use this at the start of your main code to make sure the character generated is unique each time you run your program <br><br>
  ```randomChar(mode)``` is the Function that actually generates the character
- mode : Selects the Generator Mode
  - 0 : lowercase
  - 1 : UPPERCASE
  - 2 : BotH

## Explanation
```randomCharInit()``` Uses your current time to generate a seed for the ```rand()``` function by using ```srand()``` <br> If you don't generate a new seed then the default seed will be used which may form a pattern rather than being random
<br><br><br>
```randomChar(mode)``` Uses an Array of 52 characters (26 lowercase + 26 UPPERCASE) <br>
It uses the ```rand()``` function to generate a random integer<br>
Then based on the Generator Mode (the parameter ```mode```), it will manipulate the randomly generated integer so that it can be used as the index in the Array<br>
Finally it uses this index to get a character out of the Array and then returns it
