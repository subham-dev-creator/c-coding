#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

typedef pair<int,pair<int,int> > pi;

int  main()
{	
	vector<vector<int> >k_arr { { 2, 6, 12 }, { 2, 9 }, { 2, 6, 12, 2000 } };
	vector<int> output;
	//min heap
	priority_queue<pi,vector<pi>,greater<pi> > pq;
	
	int k,i;
	string buff;
	
	//input k
	//cin>>k;
	k=3;
	//getting buffer
	//getline(cin,buff);
	
	/*for(i=0;i<k;i++)
	getline(cin,k_arr[i]);*/

	for(i=0;i<k;i++)
	pq.push({k_arr[i][0],{i,0}});
	
	while(!pq.empty())
	{
		pi current=pq.top();
		pq.pop();
		
		int i=current.second.first;
		int j=current.second.second;
		
		output.push_back(current.first);
		
		if(j+1<k_arr[i].size())
		{
			pq.push({k_arr[i][j+1],{i,j+1}});
		}
					
	}
	
	for(i=0;i<output.size();i++)
	cout<<output[i]<<"  ";
}
