
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Sample Input
4 
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

__gcd(a,b) is inbuild function,(b>a)

******lcm*gcd=a*b;always****

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int x=__gcd(a,b);
	cout<<a*b/x;
	return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if (b==0)
     return a;
    else
     return gcd(b,a%b);
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<endl;
	}
	return 0;
}
