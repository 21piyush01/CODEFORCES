#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n ;
  cin >> n ;
  if(n%2==1)
  { cout << -1 ; }
  else  	
  {
  	for(i=0;i<n;i++)
  	{
  	  if(i%2==0)
  	  { cout << i+2 << " " ; }
  	  else
  	  { cout << i << " " ; }	
  	}	
  }
  cout << endl ;
  return 0 ;	
} 