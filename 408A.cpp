#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,x,y,z=0 ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=0;i<n;i++)	
  {
  	m=0 ;
  	for(j=0;j<A[i];j++)
    { cin >> x ; m+=x ; }
	m*=5 ;
	m = m+(A[i]*15) ;
	z = z==0 ? m : (z<m ? z : m) ;
  }		
  cout << z << endl ;
  return 0 ;	
} 