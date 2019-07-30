#include<iostream>
using namespace std;
int power(int a,int b)
{
	if(b==0)
		return 1;
	
	cout<<'a';
	int smallerAns=power(a,b/2);
	smallerAns *=smallerAns;
	cout<<'b';
	if(b&1)
	{
		smallerAns*=a;
	}
	return smallerAns;
}
int main()
{
	int n=2;
	int m=10;
	cout<<power(n,m);
}
