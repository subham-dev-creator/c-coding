#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int ways(int x,int y,int n,int m)
{
	if(arr[x][y]!=-1)
	return (arr[x][y]);
	
	
	if(x==n-1 || y==m-1)
	return 1;
	
	arr[x][y]=(ways(x+1,y,n,m)+ways(x,y+1,n,m));
	return(arr[x][y]);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<100;i++)
	{
	for(int j=0;j<100;j++)
	arr[i][j]=-1;
	}
	cout<<ways(0,0,n,m);
}
