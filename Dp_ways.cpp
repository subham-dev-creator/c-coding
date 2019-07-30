#include<bits/stdc++.h>
using namespace std;
int arr[100][100];

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<100;i++)
	{
	for(int j=0;j<100;j++)
	arr[i][j]=-1;
	}
	
	for(int i=0;i<n;i++)
		arr[i][m-1]=1;
		
	for(int j=0;j<m;j++)
		arr[n-1][j]=1;
		
	for(int i=n-2;i>=0;i--)
	{
		for(int j=m-2;j>=0;j--)
		{
			arr[i][j]=arr[i+1][j]+arr[i][j+1];
		}
	}
	cout<<arr[0][0];
}
