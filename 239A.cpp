#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int y, k, n ;
  cin >> y >> k >> n ;
  long long int x = k-y%k ;
  long long int top = n-y ;
  if(x<=top)
  {
    cout << x << " " ;
    x+=k ;
    while(x<=top)
    {
      cout << x << " " ;
      x+=k ;
    }
    cout << endl ;
  }
  else
  { cout << -1 << endl ; }
  return 0 ;	
} 





