https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll sv[1000002];
ll n=1000001;
ll cum[10000001]={0};

void svi()
{
  sv[0]=1;
  sv[1]=1;
  for(ll i=2;i*i<n;i++)
  {
    if(sv[i]==0)
    {
      for(ll j=i*i;j<=n;j+=i)
      {
        sv[j]=1;
      }
    }
  }
  int c=0;
  int pp[n];
  for(int i=0;i<n;i++)
  {
    if(sv[i]==0)
  {
    c++;
  }
  if(sv[c]==0)
  {
    pp[i]=1;
  }
  else
  {
    pp[i]=0;
  }
  }
  //for(int i=1;i<12;i++)
  //{
  //  cout<<pp[i]<<" ";

  //}

cout<<endl;
  
  for(int i=1;i<n;i++)
  {
    cum[i]=cum[i-1]+pp[i];

  }
}


int main()
{
   

   ll t;
   cin>>t;
   svi();
   while(t--)
   {
     ll l,r;
     cin>>l>>r;
     cout<<cum[r]-cum[l-1]<<endl;
   }
 

}
