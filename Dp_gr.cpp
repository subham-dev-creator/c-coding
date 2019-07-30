#include<bits/stdc++.h>
using namespace std;
int arr[100][100];

int main()
{
	int n,m;
	cin>>n>>m;
	int mm[n][m];
	
	for(int i=0;i<100;i++)
	{
	for(int j=0;j<100;j++)
	arr[i][j]=0;
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>mm[i][j];
	}
	
	arr[0][0]=mm[0][0];
	
	for(int i=1;i<n;i++)
		arr[i][m-1]=mm[i-1][m-1]+mm[i][m-1];
		
	for(int j=1;j<m;j++)
		arr[n-1][j]=mm[n-1][j-1]+mm[n-1][j];
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<arr[i][j]<<" ";
		
		cout<<endl;
	}
		
//	for(int i=n-2;i>=0;i--)
//	{
//		for(int j=m-2;j>=0;j--)
//		{
//			arr[i][j]=arr[i+1][j]+arr[i][j+1];
//		}
//	}
//	cout<<arr[0][0];
}
