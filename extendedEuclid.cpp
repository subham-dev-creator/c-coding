#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	
	return gcd(b,a%b);
}
int x,y,GCD;
//extended euclid method
void eem(int a,int b)
{
	if(b==0)
	{
		x=1;
		y=0;
		GCD=a;
		return;
	}
	
	eem(b,a%b);
	int cx=y;
	int cy=x-(a/b)*y;
	x=cx;
	y=cy;
}
int main()
{
	int a,b;
	cin>>a>>b;
	//equation - AX + BY = gcd(A,B) finding X and Y
	eem(a,b);
	cout<<x<<"  "<<y;
}
