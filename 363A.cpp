#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x,y,z=0 ;
  cin >> n ;
  if(n==0)
  { cout << "O-|-OOOO\n" ; }
  else
  {	
    while(n>0)
    {
  	  m = n%10 ;
  	  n/=10 ;
  	  if(m<5)
  	  { cout << "O-|" ; }
  	  else
  	  { m-=5 ; cout << "-O|" ; }
  	  for(i=0;i<m;i++)
  	  { cout << "O" ; }
  	  cout << "-" ;
  	  for(i=0;i<4-m;i++)
  	  { cout << "O" ; }
  	  cout << endl ;	
  	}
  }	
  return 0 ;	
} 