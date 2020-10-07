Implement pow(x, n) % M.
In other words, given x, n and M, find (xn) % M.
Example 1:

Input: 3 2 4
Output: 1
Example 2:

Input: 10 9 6
Output: 4
 

Your Task:
You don't need to read or print anything. Your task is to complete the function PowMod() which takes the x, n and M as input parameters and returns xn % M.
 

Expected Time Complexity: O(log(n))
Expected Space Complexity: O(1)
 
 
 

Constraints:
1 <= x, n, M <= 100000

Company Tags
Topic Tags

If you are facing any issue on this page. Please let us know.

https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1




	long long int PowMod(long long int x,long long int n,long long int M)
	{
		    // Code here
		   long long  int res=1;
		    while(n)
		    {
		        if(n&1==1)
		        {
		            res=(res*x)%M;
		            
		        }
		        
		      x=(x*x)%M;
		      n=n>>1;
		    }
		    return res;
		    
		}
