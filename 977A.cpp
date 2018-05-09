#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n;
  int k;
  cin >> n >> k ;
  while(k>0)
  {
    if(n%10==0)
    { n=n/10 ; }
    else
    { n = n-1 ; }
    k-- ;    
  }
  cout << n ;      
  
  return 0 ;    
} 