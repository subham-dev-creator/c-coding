#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;


int main() {
	int n,c_num,i,sum=0;
	cin>>n;
	cin>>c_num;
	int arr[n];
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<c_num;i++)
	sum+=arr[i];
	
	for(i=(c_num-1);i<n;i++)
	{
		if(i==(c_num-1))
		cout<<sum<<endl;
		else
		{
		sum=sum+arr[i]-arr[i-c_num];
		cout<<sum<<endl;
	}		
	}
}
