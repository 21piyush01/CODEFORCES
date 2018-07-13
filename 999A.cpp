#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,k ;
  cin >> n >> k ;
  int A[n],i ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  int l=0,r=n-1,z=0 ;
  while(A[l]<=k) 
  { l++ ; z++ ; }
  while(A[r]<=k && r>l) 
  { r-- ; z++ ; }
  cout << z ;  	
  
  return 0 ;	
} 