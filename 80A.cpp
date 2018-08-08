#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,m ;
  cin >> n >> m ;
  int A[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47} ;
  for(i=0;i<15;i++)
  {
  	if(A[i]==n)
  	{
  	  if(A[i+1]==m)
  	  { cout << "YES" ; }
  	  else
  	  { cout << "NO" ; }	
  	}	
  }
  if(n=='47')
  { cout << "NO" ; }	
  return 0 ;	
} 