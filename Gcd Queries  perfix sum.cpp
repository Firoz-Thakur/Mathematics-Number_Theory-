
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 

 
 int t;
 cin>>t;
 while(t--)
 {
   int n,q;
   cin>>n>>q;
   int ar[n];
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   }
   long long int left[n];
   long long int right[n];
   long long int g1=0;
   long long int g2=0;
   for(int i=0;i<n;i++)
   {
   	 left[i]=__gcd<long long int>(g1,ar[i]);
   	 g1=left[i];
   }
   //for(int i=0;i<n;i++)
   //{
   //	cout<<left[i]<<" ";
   //}
   for(int i=n-1;i>=0;i--)
   {
   	 right[i]=__gcd<long long int> (g2,ar[i]);
   	 g2=right[i];
   }
   //cout<<endl;
   //  for(int i=0;i<n;i++)
   //{
   //	cout<<right[i]<<" ";
   //}
   
   
   while(q--)
   {
     int l,r;
     cin>>l>>r;
     l--;
     r--;
     if(r+1<n && l-1>=0 )
     {
     	cout<<__gcd(left[l-1],right[r+1])<<endl;
     }
     else if(l-1>=0)
     {
     	cout<<left[l-1]<<endl;
     }
     else
     {
     	cout<<right[r+1]<<endl;
     }
     
 
   }
 }



}



	
