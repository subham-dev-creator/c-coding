#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n,int j)
{
	if(n==1)
	return;
	
	if(j==n-1)
	sort(a,n-1,0);
	
	if(a[j]>a[j+1])
	{
		int t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	
	sort(a,n,j+1);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	sort(a,n,0);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
