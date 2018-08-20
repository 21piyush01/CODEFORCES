#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,m,price=0 ;
  cin >> n >> m ;
  int A[n] ;
  for(i=0;i<n;i++)  
  { cin >> A[i] ; }
  sort(A, A+n) ;
  for(i=0;i<m;i++)
  {	
  	if(A[i]<=0)
  	{ price = price - A[i] ; } 
  }
  cout << price ;
  return 0 ;	
} 