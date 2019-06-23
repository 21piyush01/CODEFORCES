#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int gcd(int x, int y) 
{
    if(x<y) 
    { return gcd(y, x) ; }
    if(y==0) 
    { return x ; }
    return gcd(y, x%y) ;
}

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int i,n,g,x ;
  cin >> n >> g ;
  for(i=1;i<n;i++) 
  {
    cin >> x ;
    g = gcd(g, x) ;
  }
  cout << g*n << endl ;
  return 0 ;	
}