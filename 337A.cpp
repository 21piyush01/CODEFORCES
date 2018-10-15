#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,z ;
  cin >> n >> m ;
  int A[m] ;
  for(i=0;i<m;i++)
  { cin >> A[i] ; }
  sort(A, A+m) ;
  i=0, j=n-1 ;
  z = A[j]-A[i] ;
  while(j<m)
  {
    if(z > A[j]-A[i])
    { z = A[j]-A[i] ; }
    i++ ; j++ ;	
  }	
  cout << z ;
  return 0 ;	
} 