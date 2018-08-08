#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,a,b,k=0 ;
  cin >> n >> a >> b ;
  if(b<0)
  {
 	b = ((-1*b)%n) ;
    if(a>b)
    { k = a-b ; }
    else if(a==b)
    { k = n ; }
    else
    { k = a + (n-b) ; }	
  }
  else
  {
    k = ((a+b)%n) ; 
    if(k==0)
    { k = n ; }
  }  	
  cout << k << endl ;
  return 0 ;	
} 