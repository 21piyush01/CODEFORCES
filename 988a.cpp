#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,k ;
  cin >> n >> k ;
  int A[n],B[100]={0},i,j,q[100],r=0 ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	B[A[i]-1]++ ;
    if(B[A[i]-1]==1)
    { q[r]=i+1 ; r++ ; }  

  }	
  if(r<k)
  { cout << "NO\n" ; }
  else
  {
  	cout << "YES\n" ;
  	for(i=0;i<r;i++)
  	{ cout << q[i] << " " ; }
  	cout << "\n" ;	
  }  	
  
  return 0 ;	
} 