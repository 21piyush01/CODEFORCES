#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,min=101,mini,max=0,maxi ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	if(max<A[i])
  	{ max=A[i] ; maxi=i ; }
  	if(min>=A[i])
  	{ min=A[i] ; mini=i ; } 
  }
  if(mini>maxi)
  { cout << maxi-0+n-1-mini ; }	
  else
  { cout << maxi-0+n-1-mini-1 ; }	
  return 0 ;	
} 