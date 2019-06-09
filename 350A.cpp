#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,z=-1 ;
  cin >> n >> m ;
  int A[n], B[m] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=0;i<m;i++)
  { cin >> B[i] ; }
  sort(A, A+n) ;
  sort(B, B+m) ;
  if(A[n-1]<B[0])	
  {
    for(k=A[n-1];k<B[0];k++)
    {
      if(k>=(2*A[0]))
      { z=k ; break ; }	
    }		
  }
  cout << z << endl ;	
  return 0 ;	
}