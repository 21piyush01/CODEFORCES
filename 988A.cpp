#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,k ;
  cin >> n >> k ;
  int A[n],B[100],i,j,q[100],r=0,z=-1 ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	if(i==0)
    { q[r]=A[i] ; B[r]=i+1 ; r++ ; }
    else
    {
      z=-1 ;	
      for(j=0;j<i;j++)
      { 
        if(q[j]==A[i])
        { z=0 ; break ; }	
      }	
      if(z==-1)
      { q[r]=A[i] ; B[r]=i+1 ; r++ ; }	
    } 
  }	
  if(r<k)
  { cout << "NO\n" ; }
  else
  {
  	cout << "YES\n" ;
  	for(i=0;i<r;i++)
  	{ cout << B[i] << " " ; }
  	cout << "\n" ;	
  }  	
  
  return 0 ;	
} 