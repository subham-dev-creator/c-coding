#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int l,int r,int key)
{
	int mid=(l+r)/2;
	if(l>r)
	return -2;
	else if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
	bs(a,l,mid-1,key);
	else if(a[mid]<key)
	bs(a,mid+1,r,key);
		
}
int main()
{
	int n,key;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"ENTER KEY ELEMENT ";
	cin>>key;
		
	cout<<bs(a,0,n-1,key)+1;
}
