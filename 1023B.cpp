#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll n,k,count=0 ;
  cin >> n >> k ;
  ll a=k/2,b=k-a,c=n<k?n:k ;
  if(a<=n && b<=n)
  {
    if(a!=b)
    { count++ ; }
      ll x = a-1 ;
      ll y = c-b ;
      ll z = x<y ? x : y ;
      count = count + z ;	
    cout << count ;	
  }
  else
  { cout << 0 ; }	

  return 0 ;	
} 