//segmented Sieve 
//finding primes between a and b
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
#define ll long long
int main()
{
	ll a;
	ll b;
	cin>>a>>b;
	//compute primes between 2 and sqrt(b)
	
	ll sqrt_b=sqrt(b);
	bool p[sqrt_b+1];
	memset(p,true,sizeof(p));
	
	p[0]=p[1]=false;
	for(int i=2;i*i<=sqrt_b;i++)
	{
		if(p[i])
		{
			for(int j=i*i;j<=sqrt_b;j+=i)
			p[j]=false;
		}
	}
	
	for(int i=2;i<=sqrt_b;i++)
	{
		if(p[i])
		cout<<i<<" ";
	}cout<<endl;
	
	//compute prime between range
	bool pp[b-a+1];
	memset(pp,true,sizeof(pp));
	for(int i=2;i<=sqrt_b;i++)
	{
		for(int j=a;j<=b;j++)
		{
			if(p[i])
			{
				if(j%i==0)
				pp[j-a]=false;
			}
		}
	}
	
	for(int j=a;j<=b;j++)
	{
		if(pp[j-a])
		{
			cout<<j<<" ";
		}
	}
}
