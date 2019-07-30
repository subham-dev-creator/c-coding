#include<bits/stdc++.h>
using namespace std;
int ls(int a[],int l,int r,int key)
{
	if(l>r)
	return -1;
	if(a[l]==key)
	return l;
	else if(a[r]==key)
	return r;
	
	ls(a,l+1,r+1,key);
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Enter elemnt to find";
	int key;
	cin>>key;
	
	cout<<endl<<ls(a,0,n-1,key)<<endl;;
}
