#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i, n, x, even(0), lastodd(0), lasteven(0) ;
  cin >> n ;
  for(i=1;i<=n;i++)
  {
    cin >> x ;
    if((x%2)==0)
    {
      even += 1 ;
      lasteven = i ;
    }
    else
    {
      even -= 1;
      lastodd = i;
    }
  }
  cout << ((even>0) ? lastodd : lasteven) << endl ;
  return 0 ;	
}