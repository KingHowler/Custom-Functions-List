A number is divisible by another if the remainder after division is equal to zero
Num1 %  Num2 == 0  means that Num1 is divisible by Num2
If the number is not divisible by any number other than itself and 1, then it is a prime number



All integers are prime numbers if there is no factor between 1 and it`s square root
Factors of 16 = 1, 2, 4, 8, 16          the square root of 16 is 4, if there were no integers between 1 and 4(inclusive) there could be no integers after 4 [(8 * 2) and (2 * 8) are a pair  there can't be only 1]
Hence we don't need to use the divisibility test for integers greater than the square root of the number being tested


By using a for loop with a varible "c" we can run the divisibility test in a loop



Any integer can be represented in terms of 6 as the following:
6k , 6k + 1, 6k + 2, 6k + 3, 6k + 4, 6k + 5
Where k is an integer which increases
If we initially use the divisibility test for 2 and 3 we can simplify the possible factors to 6k + 1 and 6k + 5
Then we can write them in terms of c as the following:
c = 6k + 5 and c + 2 = 6(k + 1) + 1

[ we can prove this by substituting c = 6k + 5 into c + 2 = 6(k + 1) + 1
		
		6k + 5 + 2 = 6(k + 1) + 1
	    6k + 5 + 1 + 1 = 6(k + 1) + 1
	        6k + 6 + 1 = 6(k + 1) + 1
              6(k + 1) + 1 = 6(k + 1) + 1

Hence Proven]

now we can increment c in the for loop by 6 and use the divisibility test for c & c + 2
as 6k + 5 is less than 6(k + 1) + 1, c = 6(0) + 5 = 5 initially
