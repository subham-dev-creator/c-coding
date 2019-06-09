//counting Sort
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	int sarr[n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	int freq[201];
	memset(freq,0,201*sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		++freq[arr[i]];
	}
		
	
	
	for(int i=1;i<201;i++)
		freq[i]+=freq[i-1];
		
	for (int i = 0;i<n; i++) 
        {
          sarr[freq[arr[i]]] = arr[i];
          freq[arr[i]]--;
        }	
	for(int i=1;i<n+1;i++)
	cout<<sarr[i]<<" ";
		
}
