#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>n;
	
	cin>>t;
	
	int arr[101][101];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t+1;j++)
		{
			cin>>arr[i][j];
		}
	}

	int mtr[n];
	
	for(int i=0;i<n;i++)
	mtr[i]=arr[i][t];
	
	
	if(t%2!=0)
	{
		//odd
		t--;
	}
	
	int at[101][101];
	int k=0;
	
	for(int i=0;i<n;i++)
	{k=0;
		for(int j=0;j<t;j=j+2)
		{
			at[i][k]=arr[i][j+1]+arr[i][j];
			k+=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
		  at[i][j]*=mtr[i]; 
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<k;j++)
		{
		    at[i][j]+=at[i][j-1];
		}
	}
	

	
	int win[k];
	
	
    for(int j=0;j<k;j++)
    {
        int max=0;
        for(int i=0;i<n;i++)
	    {
	        if(max<at[i][j])
	        {
	            max=at[i][j];
	            win[j]=i;
	        }
	    }
    }
    
    int freq[101];
    memset(freq,0,101*sizeof(int));
    
    for(int i=0;i<k;i++)
    freq[win[i]]++;
    
    int ma=-1;
    int www;
    for(int i=100;i>=0;i--)
    {
        if(ma<=freq[i])
        {
        ma=freq[i];
        www=i;
        }
    }
	
	cout<<www+1;
}
