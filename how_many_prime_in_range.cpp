#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int ar[10000000]={0};
	 ar[0]=1;
	 ar[1]=1;
	for(int i=2;i*i<=1000001;i++)
	{
		if(ar[i]==0)
		 {
			 for(int j=2*i;j<=1000001;j=i+j)
			    ar[j]=1;
		 }
	}
	//cout<<
    int pre[10000000]={0};
	for(int i=1;i<1000001;i++)
	{ 
	    if(ar[i]==0)
		 pre[i]=pre[i-1]+1;
		else
		 pre[i]=pre[i-1];
		
	}
//	for(int i=0;i<=10;i++)
//	 cout<<pre[i]<<" ";
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		cout<<pre[b]-pre[a-1]<<endl;
	}
	return 0;
}
