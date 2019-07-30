#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;
		
		node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}
};

node *insertInBst(node *root,int data)
{
	
}

node* BuildBinTree()
{
	int d;
	cin>>d;
	node *root=NULL;
	
	while(d==-1)
		{
		root=insertInBst(root,d);
		cin>>d;		
	}
	return root;
	
}

int main()
{
	
}
