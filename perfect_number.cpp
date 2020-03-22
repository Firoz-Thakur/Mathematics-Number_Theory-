Given a number N, check if a number is perfect or not. A number is said to be perfect if sum of all its factors excluding the
number itself is equal to the number.


Example:
Input:
2
6
21
Output:
1
0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int sum=1;
	    for(long long int i=2;i*i<=n;i++)
	    {
	        if(n%i==0)
	    {
	         if(i*i!=n)
	          sum=sum+i+n/i;
	         else
	          sum=sum+i;
	    }
	        
	    }
	   if(sum==n)
	    cout<<"1"<<endl;
	   else
	    cout<<"0"<<endl;
	    }
	return 0;
}
