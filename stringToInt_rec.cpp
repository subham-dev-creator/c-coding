#include<iostream>
#include<math.h>
using namespace std;
int con(string s,int n)
{
	if(n==1)
	return (s[0]-48);
	
	int num=((s[0]-48)*pow(10,n-1))+con(s.substr(1),n-1);
	return num;
	
}
int main()
{
	string s;
	cin>>s;
	cout<<con(s,s.length())*100;
}
