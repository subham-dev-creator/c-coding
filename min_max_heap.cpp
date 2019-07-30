#include<iostream>
#include<vector>
#include<functional>
#include<queue>
using namespace std;
int main()
{
priority_queue<double> max_heap;
priority_queue<double, vector<double>, greater<double> > min_heap;

for(int i=0;i<5;i++)
{
	max_heap.push(i);
	min_heap.push(i);
}

while(!max_heap.empty())
{
	cout<<max_heap.top();
	max_heap.pop();
}
cout<<endl;

while(!min_heap.empty())
{
	cout<<min_heap.top();
	min_heap.pop();
}
return 0;
}
