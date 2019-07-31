#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> m ;
  int A[n][m] ;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    { 
      cin >> A[i][j] ;
      if(A[i][j]==1)
      {
      	if(i==0 || i==n-1 || j==0 || j==m-1)
      	{ x=1 ; }
      	if(i!=0 && i!=n-1 && j!=0 && j!=m-1)
      	{ y=1 ; }	
      } 
    }	
  }	
  if(x==1)
  { cout << 2 << endl ; }
  else	
  { cout << 4 << endl ; }
  return 0 ;	
} 