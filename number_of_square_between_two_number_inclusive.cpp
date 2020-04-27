Watson likes to challenge Sherlock's math ability. He will provide a starting and ending value describing a range of integers.
Sherlock must determine the number of square integers within that range, inclusive of the endpoints.

Note: A square integer is an integer which is the square of an integer, e.g. .

For example, the range is  and , inclusive. There are three square integers in the range:  and .

Function Description
Let me try to give a better explanation.

We're given two numbers which represent the start and end of a sequence, for example: 4, 16

Our objective is to find how many numbers in the sequence 4 5 6 7 ... 15 16 are square integers.

A square integer is a number whose square root is an integer.

If we take the square root of the start of our sequence, it allows us to determine the lower boundary of the square integers that 
could possibly occur in our sequence.

How do we know this? Let's walk through it step by step:

In our example (4, 16), the square root of 4 is 2.

2 is an integer, which means 4 is a square integer - the lowest square integer in our sequence. Our sequence starts at 4, after all.
Anything lower would definitely be outside that range.

Let's pretend for a moment that our sequence starts at 5 instead of 4. The square root of 5 is 2.24. Since 2.24 is not an integer,
we know that 5 is not a square integer. If we round down from 2.24, we get 2, which is the square root of 4. If our sequence starts at 5, 
it does NOT include 4. This is why we have to round up when we take the square root of our starting number.

Rounding up from 2.24, we get 3, which is the square root of 9. So that means for a sequence starting at 5, 9 is the lowest square 
integer that
could possibly occur, if the sequence happens to go that high.

Next, let's look at the upper boundary. We get the upper boundary by taking the square root of the end of our sequence. For our
original example (4, 16), if we take the square root of 16 we get 4. Since 4 is an integer, that means 16 is the highest possible 
square integer that could occur in our sequence. Again, our sequence ends at 16, so anything higher is definitely outside our range.

Ok, once more: let's pretend our sequence ends at 17. The square root of 17 is 4.12, so that tells us 17 is not a square integer. 
If we were to round up from 4.12 like we did with our starting number, that would give us 5, which is the square root of 25.
We know our sequence ends at 17, so 25 is outside that range. This is why we have to round down when we take the square root of our
ending number.

Rounding down from 4.12, we get 4, which is the square root of 16. That means for a sequence ending at 17, 16 is the highest square 
integer that could possibly occur, provided that our sequence starts low enough.

Putting it all together, we know the lowest possible square integer in our sequence is 4, and the highest possible square integer in 
our sequence is 16. The square roots of these boundaries are 2 and 4, respectively.

If we walk up in integer steps from the lowest square root to the highest, we get the sequence 2 3 4. We know for sure that squaring 
each of these integers will result in a square integer, and we know each of these square integers will be within our range.

So now all we have to do is calculate the length of our sequence of square roots, and that will give us the number of square integers 
that are within the range of our original sequence.

For our example, our sequence of square roots starts at 2 and ends at 4. We can approximate the length by taking the difference of the 
endpoints (4 - 2), which is 2. But this calculation leaves out the first number in the sequence, so we have to add 1 to get the true
length.

Congratulations, we did it! 4 - 2 + 1 = 3, which is the length of the sequence 2 3 4, which are the square roots of the square integers
4 9 16, which are the three square integers in our original sequence 4 5 6 7 ... 15 16!






2
3 9
17 24
Sample Output
2
0

// Complete the squares function below.
long long int   squares(long long int a,long long int b) {
 
 
float x=sqrt(a);    //flaot value for sqrt(5) --> 2.23 it should not be int ,because if we take it as int mean we are including 4 as well. 
long long int y=sqrt(b);    

return y-ceil(x)+1;


}


