The inverse of the the number (a) w.r.t m is onl possible if the gcd(a,m) is=1;

(a.b)%m=1
 
 here we have to find he value of b;
 
 now :
 
 (a.b)%m-1=0;
 a.b-1=k.m
 a.b-k.m=1;
 
 a.b+(-km)=1
 a.b+(k'm)=1
 
 the given equation is same as the :
 ax+by=gcd(a,b) // gcd(a,m) must be 1.
 
 using the extended eculied algo we can find the valhe of x which is same as the bl;
 
 probleM: Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.
 
 
 Example:
Input:
2
3 11
10 17

Output:
4
12

Explanation:
Testcase1:
Input:  a = 3, m = 11
Output: 4
Since (4*3) mod 11 = 1, 4 is modulo inverse of 3
One might think, 15 also as a valid output as "(15*3) mod 11" 
is also 1, but 15 is not in ring {0, 1, 2, ... 10}, so not valid.



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int x,y,gcd;

void  extended_ec(int a,int b)
{
    
  if(b==0)
  {
      x=a;
      y=b;
      gcd=a;
      return;
  }
  
  extended_ec(b,a%b);
  int cx=y;
  int cy=x-(a/b)*y;
  x=cx;
  y=cy;

}
int find_inverse(int a,int b)
{
    if(__gcd(a,b)==1)
    {
        
        extended_ec(a,b);
        return (x+b)%b;
        
    }
    
  return -1;
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,m;
	    cin>>a>>m;
	    cout<<find_inverse(a,m)<<endl;
	    
	}
	
	return 0;
}
