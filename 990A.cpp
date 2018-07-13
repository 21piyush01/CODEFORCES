#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n,m,a,b,k,ans=0 ;
  cin >> n >> m >> a >> b ;
  k = n%m ;
  if(k!=0)
  {
    ans = (k*b >= (m-k)*a) ? (m-k)*a : k*b ;
    cout << ans ; 
  }
  else
  { cout << ans ; }	
    	
  
  return 0 ;	
} 