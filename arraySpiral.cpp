#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cin>>r>>c;
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cin>>a[i][j];
	}
	
	int l=0,m=r-1,n=0,o=c-1;
	while(o>n && m>l)
	{
		for(i=n;i<=o;i++)
			cout<<a[l][i]<<" ";
		l++;
		
		for(i=l;i<=m;i++)
			cout<<a[i][o]<<" ";
		o--;
		
		for(i=o;i>=n;i--)
			cout<<a[m][i]<<" ";
		m--;
		
		for(i=m;i>=l;i--)
			cout<<a[i][n]<<" ";
		n++;
	}
}
