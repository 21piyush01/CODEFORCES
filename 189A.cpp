#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int a,b,c,n,m,i,j,k,z=0 ;
  cin >> n >> a >> b >> c ;
  for(i=0;(i*a)<=n;i++)
  {
	for(j=0;(i*a+j*b)<=n;j++)
	{
	  k = (n-i*a-j*b)/c ;
	  if((i*a+j*b+k*c)==n)
	  { z = max(i+j+k, z) ; }
	}
  }	
  cout << z << endl ;
  return 0 ;	
}