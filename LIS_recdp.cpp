#include<bits/stdc++.h>
using namespace std;
int lis(int )
int mlis(int n)
{
	int m=0;
	for(int k=0;k<n;k++)
	{
		m=max(m,lis(k));
	}
	return m;
}
int lis(int n)
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	mlis(n);
}
