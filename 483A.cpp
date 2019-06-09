#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int i,j,k,a,b,c,l,r ;
  cin >> l >> r ;
  if(l%2!=0)
  { l+=1 ; }	
  if(r-l<2)
  { cout << "-1" << endl ; }
  else
  { cout << l << " " << l+1 << " " << l+2 << endl ; }
  return 0 ;	
}