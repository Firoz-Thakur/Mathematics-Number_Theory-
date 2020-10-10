#include <iostream>
using namespace std;

int gcdi(int a,int b)
{
	if(b==0)
	 return a;
	 
	return gcdi(b,a%b);
	
}

int x,y,gcd;

1.) ax+by=gcd(a,b)
2.) ay'+b[x'-(a/b)x']=gcd(a,b)
	
now we can say that : x=y'
	and           y=x'-(a/b)x'


	base case: gcd=a,x=1,y=0; when b==0;



void extended_gcd(int a,int b)
{
	if(b==0)
	{
		x=1;
		y=0;
		gcd=a;
		return;
	}
 extended_gcd(b,a%b); 	
 int curx=y;
 int cury=x-(a/b)*y;
 
 x=curx;
 y=cury;
}



int main() {
	// your code goes here
	int a=12;
	int b=10;
	cout<<gcdi(a,b)<<endl;
	
	extended_gcd(a,b);
	cout<<x<<" "<<y;
	return 0;
}
