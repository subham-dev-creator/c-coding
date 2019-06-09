#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool p[1000000];
void seive()
{
	memset(p,true,sizeof(p));
	p[0]=p[1]=false;
	
	for(int i=2;i*i<1000000;i++)
	{
		if(p[i])
		{
			for(int j=i*i;j<1000000;j+=i)
			p[j]=false;
		}
	}
}
vector<int> factorization(int n)
{
	vector<int> primes;
	for(int i=2;i<1000000;i++)
	{
		if(p[i])
		primes.push_back(i);
	}
	
	vector<int> prime_factors;
	
	int i=0;
	int pf=primes[i];
	
	while(pf*pf<=n)
	{
		if(n%pf==0)
		{
			prime_factors.push_back(pf);
			while(n%pf==0)
			n=n/pf;
		}
		i++;
		pf=primes[i];
	}
	if(n!=1)
	prime_factors.push_back(n);
	
	return prime_factors;
}
int main()
{
	int n;
	cin>>n;
	seive();
	vector<int> prime_factors=factorization(n);
	for(int i=0;i<prime_factors.size();i++)
		cout<<prime_factors[i]<<" ";
	
}
