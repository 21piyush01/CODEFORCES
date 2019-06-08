#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m=9999,i,j,k,z=0 ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ; 
    if(i>0)
    { z = (z>(A[i]-A[i-1])) ? z : A[i]-A[i-1] ; }	
  } 
  if(n==3)
  { z = A[2]-A[0] ; }	
  else
  {
    for(i=1;i<n-1;i++)
    {
      m = m<A[i+1]-A[i-1] ? m : A[i+1]-A[i-1] ;
    }
    z = z>m ? z : m ;		
  }	
  cout << z << endl ;
  return 0 ;	
}