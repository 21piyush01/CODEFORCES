#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n ;
  cin >> n ;
  int A[7] ;
  for(i=0;i<7;i++)
  { 
    cin >> A[i] ;
    if(n-A[i]<=0)
    { n=n-A[i] ; i=i+1 ; break ; }	
  }	
  while(n>0)
  {
    if(i>=7)
    { i=0 ; } 
    n = n-A[i] ;
    i++ ;
  }
  cout << i ;
  return 0 ;	
} 