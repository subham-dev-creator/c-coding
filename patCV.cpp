#include <bits/stdc++.h>
using namespace std;
void pat(int ro,int l,int r,int n)
{
    if(ro==n)
    return;
    
    int as=2*ro;
    
    for(int i=0;i<as;i++)
    {
        cout<<"*";
        
    }
    int i;
    for(i=l;i<=l+n-ro-1;i++)
    {
        cout<<i<<"0";
    }
    
    int j;
    for(j=r-n+ro+1;j<=r;j++)
    {
        if(j==r)
        cout<<j;
        else
        cout<<j<<"0";
    }
        
    
    cout<<endl;
    
    
    pat(ro+1,i,r-n+ro,n);
}

int main() {
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    cout<<i<<"0";
    
    int sq=(n*n)+1;
    
    for(int j=sq;j<sq+n;j++)
    {
        if(j==sq+n-1)
            cout<<j<<endl;
        else
        cout<<j<<"0";
    }
    
    pat(1,i,sq-1,n);
    
}

