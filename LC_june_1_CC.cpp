#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n];
		int countP=0;
		int countA=0;
		
		for(int i=0;i<n;i++)
			{
    		    cin>>a[i];
    			if(a[i]=='P')
    			countP++;
    			if(a[i]=='A')
    			countA++;
			}
			
	
		
		//cout<<"countP  "<<countP<<endl;
		
		float min_P=(float)(0.75)*(float)n;
		//cout<<min_P<<endl;
		int min_IP=min_P;
		
		if(min_IP!=min_P)
			min_IP=(int)min_P+1;
			
		//cout<<"min_IP  "<<min_IP<<endl;
		int fst_P=0;
		int fst_A=0;
		
		if(a[0]=='P')
			fst_P++;
		else
			fst_A++;
			
		if(a[1]=='P')
			fst_P++;
		else
			fst_A++;
			
		if(a[n-1]=='P')
			fst_P++;
		else
			fst_A++;
			
		if(a[n-2]=='P')
			fst_P++;
		else
			fst_A++;
			
		//cout<<"fst_P  "<<fst_P<<endl;	
		
		int flag=-1;
		
		if(min_IP<=countP)
		flag=0;
		else{
			if(min_IP-fst_P<=n-4)
			{
				for(int i=1;i<n;i++)
				{
					if(a[i]=='P' && a[i-1]=='P')
					{
					flag=1;
					break;
					}
				}
			}
		}
		if(flag==0)
		cout<<flag<<endl;
		if(flag==1)
		cout<<(min_IP-countP)<<endl;
		if(flag==-1)
		cout<<flag<<endl;
	}
}
