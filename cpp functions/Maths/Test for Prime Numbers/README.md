### Divisibility Test
A number is divisible by another if the remainder after division is equal to zero<br>
```Num1 %  Num2 == 0```  means that Num1 is divisible by Num2<br>
If the number is not divisible by any number other than itself and 1, then it is a prime number<br>


### Shortlisting factors
An integer will be a prime numbers if it does not have a factor between 1 and it`s square root<br>
	Factors of 16 = 1, 2, 4, 8, 16 <br>         The square root of 16 is 4, if there were no integers between 1 and 4(inclusive) there could be no integers after 4<br>
 
eg- (8 * 2) and (2 * 8) are a pair  there can't be only 1<br>

Hence we don't need to use the divisibility test for integers greater than the square root of the number being tested<br>

### Running the Divisibility Test For Checking a Prime Number
By using a for loop with a varible "c" we can run the divisibility test in a loop up to the square root of the number<br>
If all of them fail, then the number is a Prime Number<br>


### Further Optimisation
Any integer can be represented in terms of 6 as the following:<br>
```6k , 6k + 1, 6k + 2, 6k + 3, 6k + 4, 6k + 5```<br>

If we initially use the divisibility test for 2 and 3 we can simplify the possible factors to ```6k + 1``` and ```6k + 5```<br>
Then we can write them in terms of c as the following:<br>
```c = 6k + 5``` and ```c + 2 = 6(k + 1) + 1```

We can prove this by substituting ```c = 6k + 5``` into ```c + 2 = 6(k + 1) + 1```
		
		6k + 5 + 2 = 6(k + 1) + 1
	    6k + 5 + 1 + 1 = 6(k + 1) + 1
	        6k + 6 + 1 = 6(k + 1) + 1
	      6(k + 1) + 1 = 6(k + 1) + 1

Hence Proven


### Final
We can increment c in the for loop by 6 and use the divisibility test for c & c + 2<br>
As ```6k + 5``` is less than ```6(k + 1) + 1```,So using ```c = 6(0) + 5 = 5```, Initially the value of c will be 5<br>
NOTE: k is the number of times the loop was completed<br>
