#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,mxi,mni ;
  cin >> n ;
  int temp,i,result ;
  for(i=0;i<n;i++)
  {
  	cin >> temp ;
  	if(temp==1)
  	{ mni = i ; }
  	else if(temp==n)
  	{ mxi = i ; } 
  }
  if(mxi<mni)
  { result = (mni-0)>(n-1-mxi) ? (mni-0) : (n-1-mxi) ; }  	
  else
  { result = (mxi-0)>(n-1-mni) ? (mxi-0) : (n-1-mni) ; }  	
  cout << result ;	
  return 0 ;	
} 