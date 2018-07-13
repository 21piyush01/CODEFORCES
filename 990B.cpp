#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int i,j,n,k,x,z=1 ;
  cin >> n >> k ;
  long long int A[n] ;
  x=n ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  sort(A, A+n) ;
  for(i=0;i<n-1;i++)
  {
    if(A[i]==A[i+1])
    { z++ ; }
    else
    {	
      if(A[i]<A[i+1] && A[i]+k>=A[i+1])
      { 
        x = x-z ; 
      }
      z=1 ;
    }  	
  }  	
  cout << x ;
  return 0 ;	
} 