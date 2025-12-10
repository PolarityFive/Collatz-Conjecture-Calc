# Collatz-Conjecture-Calc
A program to efficiently calculate if a number reaches 1 in a Collatz sequence. 

I stumbled upon the Collatz Conjecture today. Essentially, you're given an integer X. 
If X is even, then divide by 2. If X is odd, then multiple by 3 and add 1. 

Practically, it has been noticed that no matter the number, you always at some point end at 1 where you're forced into a loop. 
1 * 3 + 1 = 4 | 4/2 = 2 | 2/2 = 1| 1 * 3 + 1 = 4.... etc etc. Mathematically however, it has not been proven whether that's true for all numbers. That though, would be for the mathematicians to figure out.

On the programming side of things, creating an algorithm for such a concept, is an extremely simple task. 
However, I did not find an efficient way anywhere so I created this one. 

Task #1: Checking whether a number ends up at 1.

Task #2: Counting the steps it takes to get there.

In order to divide from any number directly  to an integer of 1, (meaning without encountering an odd number) the number divided must be a power of 2. 
So, instead of applying the conjecture's rules every time until we reach 1, we can simply check first if the number is a power of 2. If it is, then we can definitely get to 1. No more calculations needed for task #1. The amount of steps it takes to get there equals current steps + log2 of the number we're currently at. (Number that's a power of 2.) Saving us a few more calculations. 

In the name of efficiency, I used bit manipulation/operations. 

Update - December 2025. 

Came back here with actual experience now to optimize the solution. It's hilarious looking at the old code from back then. 
