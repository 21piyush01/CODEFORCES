#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll i,j,n ;
  cin >> n ;  
  if(n==0)
  { cout << 0 << " " << 0 << " " << 0 ; }
  else if(n==1)
  { cout << 0 << " " << 0 << " " << 1 ; }
  if(n==2)
  { cout << 0 << " " << 1 << " " << 1 ; }
  else 
  { 	
    ll fib[100000] ;
    fib[0]=0 ;
    fib[1]=1 ;
    fib[2]=1 ;
    fib[3]=2 ;
    for(i=4;i<100000;i++)
    {
      fib[i] = fib[i-2]+fib[i-2]+fib[i-3] ;
      if(fib[i]==n)
      { cout << fib[i-2] << " " << fib[i-2] << " " << fib[i-3] ; break ; }	
    }	
  }
  return 0 ;	
} 
