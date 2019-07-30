#include<bits/stdc++.h>
using namespace std;
int ways(int x,int y,int n,int m)
{
	if(x==n-1 || y==m-1)
	return 1;
	
	return(ways(x+1,y,n,m)+ways(x,y+1,n,m));
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	cout<<ways(0,0,n,m);
}
