// DISJOINT SETS 
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class disjoint_set
{	
	public:
	long data;
	int rank;
	disjoint_set *parent;
	void union_set(long a,long b);
	int find_set(long n);
	void make_set(long n);
	disjoint_set* find_set(disjoint_set *node);
};
map<long,disjoint_set*> m;

void disjoint_set::make_set(long n)
{
	disjoint_set s;
	s.data=n;
	s.rank=0;
	s.parent=this;
	m.insert(pair<long,disjoint_set*> (data,parent));
}
int disjoint_set::find_set(long n)
{
	return (find_set(m.at(n)))->data;
}
disjoint_set* disjoint_set::find_set(disjoint_set *node)
{
	disjoint_set *parent = node->parent;
	if(parent->data == node->data)
		return parent;
	
	node->parent = find_set(node->parent);
	return node->parent;
}
void disjoint_set::union_set(long a,long b)
{
	disjoint_set *node1=m.at(a);
	disjoint_set *node2=m.at(b);
	
	disjoint_set *parent1=find_set(node1);
	disjoint_set *parent2=find_set(node2);
	
	if (parent1->rank >= parent2->rank)
	{
        parent1->rank = (parent1->rank == parent2->rank) ? parent1->rank + 1 : parent1->rank;
        parent2->parent = parent1;
    } 
	else
	{
	    parent1->parent = parent2;
    }
}
int main()
{
	disjoint_set arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i].make_set(i);
	}
	arr[0].find_set()
    } 
}
