#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  unsigned long long int n,m,i=0,j,k,l,z=0 ;
  cin >> k >> l ;
  n=k ;
  while(k<=l)
  {
  	if(k==l)
  	{ z=1 ; break; }	
  	k *= n ;
  	i++;
  }	
  if(z==1)
  { cout << "YES\n" << i << endl ; }
  else if(z==0)
  { cout << "NO\n" ; }	
  return 0 ;	
}