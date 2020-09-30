A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not.
Find the amount of almost prime numbers which are between 1 and n, inclusive.




#include <bits/stdc++.h>
using namespace std;
//#define ll long long int
int find(int n)
{
     int sv[n+1]={0};
 
     sv[0]=1;
     sv[1]=0;
     for(int i=2;i<=n;i++)
     {
         if(sv[i]==0)
         {
             for(int j=i;j<=n;j=j+i)
             {
                 sv[j]++;
             }
         }
     }
  
  int ans=0;
  for(int i=0;i<=n;i++)
  {
      if(sv[i]==2)
       ans++;
  }
 
 
return ans;
}
 
 
 
int main()
{
 
  int n;
  cin>>n;
  cout<<find(n);
}
