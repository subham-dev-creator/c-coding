
#include<bits/stdc++.h>
using namespace std;


int bfs(int **arr,int r,int c)
{
    queue<int> qr;
    queue<int> qc;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                if(arr[i][j]==2)
                {
                    qr.push(i);
                    qc.push(j);
                    arr[i][j]=0;
                }
            }
    }
    int size=qr.size();
	int count=0;
        while(!qr.empty())
        {
            int x= qr.front();
            int y=qc.front();
            if(size==0)
            {
            	size=qr.size();
            	count++;
			}
			
            qr.pop();
            qc.pop();
			
			size--;
			
            if(x-1>=0 && arr[x-1][y]==1)
            	{
				qr.push(x-1);
				qc.push(y);
				arr[x-1][y]=0;
				}
			if(y-1>=0 && arr[x][y-1]==1)
            	{
				qr.push(x);
				qc.push(y-1);
				arr[x][y-1]=0;
				}
			if(x+1<r && arr[x+1][y]==1)
            	{
				qr.push(x+1);
				qc.push(y);
				arr[x+1][y]=0;
				}
			if(y+1<c && arr[x][y+1]==1)
            	{
				qr.push(x);
				qc.push(y+1);
				arr[x][y+1]=0;
				}

        }
        //showing after update
        /*
        for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{cout<<(arr[i][j])<<'\t';
			}cout<<endl;
		}*/
        int flag=0;
        for(int i=0;i<r;i++)
    	{
	        for(int j=0;j<c;j++)
	            {
	            	if(arr[i][j]==1)
	            	flag=1;
	            }
	    }
	    
	    if(flag==1)
	    	return(-1);
	    else
        return count;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string s,buff;
		int c,r;
		cin>>r>>c;
		getline(cin,buff);
		getline(cin,s);
		
		int **arr;
    	arr = new int *[r];
        for(int i = 0; i <r; i++)
            arr[i] = new int[c];
		int k=0;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				arr[i][j]=s[k]-48;
				k=k+2;
			}
		}
		//showing before fn call
		/*
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{cout<<(arr[i][j])<<'\t';
			}cout<<endl;
		}*/
    int result=bfs(arr,r,c);
    cout<<result<<endl;
	}
	
	
			
	
}
