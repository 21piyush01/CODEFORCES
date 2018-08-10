#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,j,n,m,max=-1,z=1 ;
  cin >> n >> m ;
  int A[n],ind=n ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	A[i] = A[i]-m ;  
  }
  while(z)
  {
  	z=0 ;
  	for(i=0;i<n;i++)
    { 
      if(A[i]>0)
      {	
  	    A[i] = A[i]-m ;
  	    ind = i+1 ;
        z=1 ;
  	  }    
    }
  }
  cout << ind ;
  return 0 ;	
} 