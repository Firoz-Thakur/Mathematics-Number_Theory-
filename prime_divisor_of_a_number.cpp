#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sv(int *prime2)
{
    int v[1000]={0};
	v[0]=1;
	v[1]=1;
   
    for(int i=2;i<1000;i++)
    {
    	if(v[i]==0)
    	{
    		for(int j=2*i;j<1000;j=j+i)
    		{
    			v[j]=1;
    		}
    	}
    }
    int j=0;
  for(int i=2;i<100;i++)
  {
  	if(v[i]==0)
  	{
  		prime2[j]=i;
  		j++;
  	}
  }

  
 // return prime;
}
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
	
for(auto p: v)
{
	cout<<p.first<<" "<<p.second<<endl;
}
	
}

void find_factor_fast(int *v,int n)
{
 int i=0;	
 int p=v[i];
 vector<int> fact;
 while(p*p<=n)
 {
 	if(n%p==0)
 	{
 		while(n%p==0)
 		{
 			n=n/p;
 		}
 	}
  fact.push_back(p);	
  i++;
  p=v[i];
  }
 if(n!=1)
 {
 	 fact.push_back(n);
 }
  
 
 for(int i=0;i<fact.size();i++)
 {
 	cout<<fact[i]<<endl;
 }
 
  	
	
}
int main() {

    int n=132;
    find_factor_slow(n);
 
    int prime2[10000];
    sv(prime2);
   
  
  cout<<"prime-divisor using prime seive"<<endl;  //fast
  find_factor_fast(prime2,n);
   
	return 0;
}
