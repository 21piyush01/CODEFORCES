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
  cin >> n ;
  int X[n], Y[n], a=0, b=0 ;
  for(i=0;i<n;i++)
  {
  	cin >> X[i] >> Y[i] ;
    a+=X[i], b+=Y[i] ;
  }
  if(a%2==0 && b%2==0)
  { z=0 ; }
  else if(a%2!=0 && b%2!=0)
  {
  	for(i=0;i<n;i++)
  	{
  	  if(X[i]%2==0 && Y[i]%2!=0)
  	  { z=1 ; break ; }
  	  else if(X[i]%2!=0 && Y[i]%2==0)
  	  { z=1 ; break ; } 	
  	}	
  }	
  cout << z << endl ;
  return 0 ;	
}