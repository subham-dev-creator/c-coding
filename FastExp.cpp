#include<iostream>
using namespace std;
//exponnetiaion of a^b in log n time
int power(int a,int b)
{
	if(b==0)
		return 1;
	
	int ans=power(a,b/2);
	ans*=ans;
	
	if(b&1)
		ans=ans*a;
	
	return ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	
	int n=power(a,b);
	cout<<n;
}
