For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

Input:
First line contains an integer, the number of test cases 'T'. T testcases follow. Each test case should contain a positive integer N.

Output:
For each testcase, in a new line, print "Yes" if it is a prime number else print "No".

Constraints:
1 <= T <= 100
1 <= N <= 109

Example:
Input:
1
5
Output:
Yes

Explanation:
Testcase 1: 5 is the prime number as it is divisible only by 1 and 5.



#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int flag=0;
	    for(int i=2;i*i<=n;i++)
	     {
	         if(n%i==0)
	          {
	              flag=1;
	              break;
	          }
	     }
	    if(flag==0)
	      cout<<"Yes"<<endl;
	    else
	     cout<<"No"<<endl;
	}
	    return 0;
}
