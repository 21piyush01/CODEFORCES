#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,a,b,x,y,z=0,count=0 ;
  cin >> n >> m ;
  if(n==1 && m==1)
  { cout << 2 ; }
  else
  {	
    if(n<m)
    { 
  	  x=0,y=n,z=0 ;
      while(x*x<n)
      {
        if(x + y*y == m)
        { cout << 1 ; z=1 ; break ; } 
        x++ ;
        y = n - x*x ; 
      } 
    }	
    else
    { 
  	  x=0,y=m,z=0 ; 
      while(x*x<m)
      {
        if(x + y*y == n)
        { cout << 1 ; z=1 ; break ; } 
        x++ ;
        y = m - x*x ; 
      }	
    } 
    if(!z)
    { cout << 0 ; }	
  }
  return 0 ;	
} 