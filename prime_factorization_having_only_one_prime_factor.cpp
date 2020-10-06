As we know that every number >=2 can be represented as natural powers of primes(prime factorization). Also prime factorization is unique for a number. 

Eg. 360 = 233251

Today we are interested in geek numbers. A geek number is a number whose prime factorization only contains powers of unity.Below are some geek numbers.

Eg. 2 = 21
    22 = 21111

Input: 

First line of the input file contains an integer T which denotes the number of test cases. Then T test cases follow. First line of each test case contains a number N.


For each test case, print "Yes"(without quotes) if it is a geek number, else print "No"(without quotes).


Constraints:
1<=T<=10000
2<=N<=106
Example:
Input:
2
22
360

Output:
Yes
No



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void find_factor_slow(int n)
{
   vector<pair<int,int>> v;
   int c;
   for(int i=2;i*i<=n;i++)
   {
   	  
   	  if(n%i==0)
   	  {
   	   c=0;
   	   while(n%i==0)
   	   {
   	  	c++;
   	  	n=n/i;
   	   }
   	   v.push_back(make_pair(i,c));	   
   	 }
  
   }
  
 if(n!=1)
 {
 	v.push_back(make_pair(n,1));
 }
 
 int flag=0;
 for(auto it: v)
 {
     if(it.second!=1)
      {
          flag=1;
      }
 }
 
 if(flag==0)
 {
     cout<<"Yes"<<endl;
 }
 else
  {
      cout<<"No"<<endl;
  }

}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    long long int n;
	    cin>>n;
	    
	    find_factor_slow(n);
	    
	    
	    
	}
	
	
	return 0;
}
