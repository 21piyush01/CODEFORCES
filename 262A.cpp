#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,z=0,l=1 ;
  cin >> n >> k ;
  for(i=0;i<k;i++)
  { l*=10 ; }	
  long long int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; } 
  for(i=0;i<n;i++)	
  {
  	if(A[i]<=l)	
  	{ z++ ; }
  	else
  	{
      m=A[i], j=0 ;
      while(m>0)
      {	
        if(m%10==7 || m%10==4)
        { j++ ; }
        m/=10 ;
      }
      if(j<=k)
      { z++ ; }  	
  	}	
  }
  cout << z << endl ; 
  return 0 ;	
}