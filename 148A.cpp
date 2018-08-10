#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  /*if(a==b)
  { return a ; }
  if(a>b)
  { return gcd(a-b, b) ; }
  return gcd(a, b-a) ;*/
  if(a==0)
  { return b ; }
  return gcd(b%a, a);
}
 
int lcm(int a, int b)
{ return (a*b)/gcd(a,b) ; }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int k,l,m,n,d ;
  cin >> k >> l >> m >> n >> d ;
  cout << d/k + d/l + d/m + d/n - d/lcm(k,l) -d /lcm(k,m) - d/lcm(k,n) - d/lcm(m,l) - d/lcm(n,l) - d/lcm(m,n) + d/lcm(k,(lcm(l,m))) + d/lcm(k,(lcm(l,n))) + d/lcm(k,(lcm(n,m))) + d/lcm(n,(lcm(l,m))) - d/lcm(lcm(k,n),(lcm(l,m))) ;  
  
    	
  
  return 0 ;	
} 