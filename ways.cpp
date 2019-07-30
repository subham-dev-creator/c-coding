#include<bits/stdc++.h>
using namespace std;
int arr[100][100];

int ways(int x,int y)
{
	if(arr[x][y]!=-1)
	return (arr[x][y]);
	
	if(x==0 || y==0)
	return 1;
	
	arr[x][y]=(ways(x-1,y)+ways(x,y-1));
	return arr[x][y];
}
int main()
{
	for(int i=0;i<100;i++)
	{
	for(int j=0;j<100;j++)
	arr[i][j]=-1;
	}
	int n,m;
	cin>>n>>m;
	
	cout<<ways(n-1,m-1);
}
