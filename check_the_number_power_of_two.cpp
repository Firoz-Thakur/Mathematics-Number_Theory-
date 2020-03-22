Given a positive integer N. The task is to check if N is a power of 2. That is N is 2x for some x.
Example:
Input :
2
1
98

Output :
YES
NO

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
	    if(n==0)
	      cout<<"NO"<<endl;
	    else if(((n)&(n-1))==0)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	}
	return 0;
}
