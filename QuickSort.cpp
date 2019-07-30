#include <iostream>

using namespace std;
int partition(int *a,int s,int e)
{
    int pivot=a[e];
    int i=s;
    for(int j=s;j<e;j++)
    {
        if(a[j]<=pivot)
        {
        int t=a[j];
        a[j]=a[i];
        a[i]=t;
        i++;
        
        }
    }
    int t=a[i];
        a[i]=a[e];
        a[e]=t;
        
    /*for(int i=s;i<=e;i++)
    cout<<a[i]<<" ";
    cout<<endl;*/
        
        return(i);
    
}
void quicksort(int *a,int s,int e)
{
    if(s>=e)
    return;
    
    int pIndex=partition(a,s,e);
    
    quicksort(a,s,pIndex-1);
    quicksort(a,pIndex+1,e);
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

