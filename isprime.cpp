#include<iostream>
using namespace std;
bool isprime(int n)
{
	if(n==1) return false;
	if(n==2) return false;
	if(n%2==0)return true;
	for(int i=3;i*i<=n;i=i+2)
	if(n%i==0) return true;
	
	return false;
}
int main()
{
	int n;
	cin>>n;
	cout<<isprime(n);
}
