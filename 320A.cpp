#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll n,i,z=0,k=1 ;
  cin >> n ;
  while(n>0)
  {
  	if(n%10==1)
  	{ z=0 ; }
    else if(n%10==4)
    { 
      z++ ;
      if(z>2)
      { k=0 ; break ; }	
    }
    else
  	{ k=0 ; break ; }	
    n = n/10 ; 
  }	
  if(k && z==0)
  { cout << "YES" ; }
  else
  { cout << "NO" ; }	
  return 0 ;	
} 