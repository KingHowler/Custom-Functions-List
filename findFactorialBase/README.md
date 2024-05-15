## Factorial
Factorial is a mathematical function which finds the product of a number in the form

            n! = n × (n-1) × (n-2) × ...... × 4 × 3 × 2 × 1
So 7! will be

            7! = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040
In this case, 7 is what we call the base number <br><br>
The function ```findFactorialBase()``` takes the result of a Factorial and finds out the base number
<br><br><br>
## Methodology - Reverse Engineering
In a Factorial, the base number is sequentially multiplied by n where the value of n decreases everytime

In order to reverse this you need to invert the process, meaning the instead of multiplying you divide, and invert the sequence, meaning instead of going from n to 1 you go from 1 to n<br>

            n = (((((n! ÷ 1) ÷ 2) ÷ 3) ÷ 4) ÷ ......... ÷ (n-1))
<br><br><br>
## Shaping the code
<br><br>
### Start by deciding the output
- For a number which is a factorial, result in the base
- For a number which is not a factorial, result -1 (meaning null)
<br><br>
### Then make the exceptions, in this function there is only one exception
- A factorial can't result in Negative numbers or 0 so :-

        if (factorial < 1) {return -1;}
<br><br>
### Now identify loops
- The factorial is being sequentially divided by an increasing number until it is just 1 less than n, a post condition loop is suitable for this

        do {
          factorial = factorial/base;
          base = base + 1;
        } while(factorial > base );

  in this the variable ```factorial``` is also effectively being used as a buffer for storing the current product remaining<br>
  The exit conditions are
  1. Factorial = Base : This means n has been found and is equal to value in base
  2. Factorial < Base : This means that no base exists
<br><br>
### Finally find out patterns that should break loops
In this case whenever the value in ```factorial``` can't be divided by that of ```base```, it means that no base exists

This can be done by using a divisibility check at each iteration of the loop

    if (factorial % base != 0) {return -1;}

#### Start Teting!
