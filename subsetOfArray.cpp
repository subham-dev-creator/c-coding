#include<bits/stdc++.h>
using namespace std;
int s=3;
int cs(int arr[],int n,int i,int sum)
{
	if(i==n)
	{
		if(sum==s)
		return 1;
		else
		return 0;
	}
	//if(sum==s)
	2//return 1;
	
	if(sum>s)
	return 0;
	
	return(cs(arr,n,i+1,sum)+cs(arr,n,i,sum+arr[i]));
}
int main()
{
	int n=3;
	int arr[]={1,2,3};
	
	cout<<cs(arr,n,0,0);
}
