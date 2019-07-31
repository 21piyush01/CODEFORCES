#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m=0,i,j,k,z=1 ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }	
  sort(A, A+n) ;
  for(i=1;i<n;i++)
  {
  	if(A[i-1]==A[i])
  	{ z++ ; }
  	else
  	{ z=1 ; }
  	m = m>z ? m : z ;
  }
  //cout << m << " " << n << " " ;	
  if(n%2==0)
  {
  	if(m <= n/2)
  	{ cout << "YES\n" ; }
  	else
  	{ cout << "NO\n" ; }	
  }	
  else
  {
  	if(m <= ((n/2)+1))
  	{ cout << "YES\n" ; }
  	else
  	{ cout << "NO\n" ; }	
  }	
  return 0 ;	
} 