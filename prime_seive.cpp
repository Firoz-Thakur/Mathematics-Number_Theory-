#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v(100,1);
    int n=53;
	v[0]=0;
	v[1]=0;
	for(int i=2;i*i<=n;i++)
	 {
	 	 if(v[i]==1)
	 	  for(int j=2*i;j<=n;j=j+i)
	 	   v[j]=0;
	 }
	for(int i=0;i<=n;i++)
	{
	   if(v[i]==1)
	    cout<<i<<" ";
	}
	return 0;
}
