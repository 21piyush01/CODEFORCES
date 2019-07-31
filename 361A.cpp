#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,l,p,q,z=0 ;
  cin >> n >> k ;
  m = k/n ;
  //cout << n << " " << k << " " << m << endl ;
  int A[n][n] ;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{ A[i][j]=m ; }	
  }	
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{ A[i][j]=m ; }	
  }	
  if(m*n!=k)
  {
  	z = k%n ;
  	for(l=0;l<z;l++)
  	{
  	  for(i=0;i<n;i++)
  	  {
  	  	p = l+i<n ? l+i : l+i-n ;
        A[i][p] += 1 ;
  	  }		
  	}	
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{ cout << A[i][j] << " " ; }	
    cout << endl ; 
  }		
  return 0 ;	
} 