#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,b,x,m,n ;
  cin >> a >> b >> x ;
  int i,A[a+b] ;  
  if(a==1 && b==1)
  { A[0]=3, A[1]==4 ; }	
  else
  {	
    A[0]=3 ;
    A[1]=3 ;
    m = a>b ? a-2 : b-2 ;
    n = a>b ? b : a ;
    for(i=2;i<a+b;i++)
    {
       if(x==1)
       { A[i]=4 ; }	
    }	
    	
  }
  return 0 ;	
} 