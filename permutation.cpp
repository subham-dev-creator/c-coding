#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  long n,k;
  cin>>n>>k;
  
  long arr[n];
  long temp[n];
  long count;
  long per[1<<n][n];
  for(long i=0;i<n;i++)
   { 
    cin>>arr[i];
    temp[i]=arr[i];
   }
  sort(arr,arr+n);
  long j=0;
  do {
   for(long i=0;i<n;i++)
   {
     per[j][i]=arr[i];
	}
	j++;
  } while (next_permutation(arr,arr+n) );
  
  for(long i=(1<<n)-1;i>=0;i++)
  {count=0;
  	for(long q=0;q<n;q++)
  	{
  		if(per[i][q]!=temp[q])
  		count++;
	  }
	  if(count==k+1)
	  {
	  for(long q=0;q<n;q++)
	  {
	  	cout<<per[i][q]<<' ';
	  }
	  break;
  	}
}
	return 0;
}
