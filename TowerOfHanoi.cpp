//Tower Of hanoi
#include<iostream>
using namespace std;
void TOH(int n,char src,char dest,char aux)
{
	if(n==0)
	return;
	
	TOH(n-1,src,aux,dest);
	
	cout<<"Move disk "<<n<<" "<<src<<" to "<<dest<<endl;
	
	TOH(n-1,aux,dest,src);
	
}
int main()
{
	int n;
	cin>>n;
	
	TOH(n,'A','C','B');
}
