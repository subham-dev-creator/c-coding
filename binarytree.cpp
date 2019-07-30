#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node *right;
		
		node(int d)
		{
			data=d;
			left=NULL;
			right=NULL;
		}
};

node* buildTree()
{
	int d;
	cin>>d;
	
	if(d==-1)
	return NULL;
	
	node *root=new node(d);
	root->left=buildTree();
	root->right=buildTree();
}

void print(node *root)
{
	if(root==NULL)
	return;
	
	
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}

int height(node *root)
{
	if(root==NULL)
	return 0;
	
	int ls=height(root->left);
	int rs=height(root->right);
	return(max(ls,rs)+1);
}

void printkthlevel(node *root,int k)
{
	if(root==NULL)
	return;
	
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}
	
	printkthlevel(root->left,k-1);
	printkthlevel(root->right,k-1);
}
void printAllLevel(node *root)
{
	int h=height(root);
	for(int i=1;i<=k;i++)
	{
		printkthlevel(root,i);
		cout<<endl;
	}
}
int main()
{
	node *root=buildTree();
	cout<<height(root);
	
}
