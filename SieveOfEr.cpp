#include<iostream>
#include<cstring>
using namespace std;
void SOE(int n)
{
	bool arr[n+1]={0};
	arr[0]=arr[1]=false;
	arr[2]=true;
	
	for(int i=3;i<=n;i=i+2)
	arr[i]=true;
	
	for(int i =3;i*i<=n;i=i+2)
	{
		if(arr[i]==true)
		{
		for(int j=i*i;j<=n;j=j+i)
		arr[j]=false;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(arr[i]==true)
		cout<<i<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	SOE(n);
}
