#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0 ;
  cin >> n ;
  if(n<0)
  {
    n = n*(-1) ;
  	m = (n%10) ;
  	k = ((n/10)%10) ;
    if(m>=k)
  	{ n = n/10 ; }
  	else
  	{
  	  n = n/100 ;
  	  n = n*10 ;
  	  n += m ;	
  	}	
    n = n*(-1) ;
  }	
  cout << n << endl ;
  return 0 ;	
}