#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,z=-1 ;
  cin >> n ;
  for(i=1;i<100;i++)
  {
  	m = n+i ;
  	m = m>0 ? m : -1*m ;
  	//cout << m << " " ; 
 	while(m>0)
    {
  	  if(m%10==8)
  	  { z=i ; break ; }
  	  m = m/10 ;	
 	}
 	if(z==i)
 	{ break ; }	
  }
  cout << z << endl ; 
  return 0 ;	
}