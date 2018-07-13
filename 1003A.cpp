#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,temp ;
  cin >> n ;
  int A[100]={0},max=-1 ;
  for(i=0;i<100;i++)
  { A[i]=0 ; }
  for(i=0;i<n;i++)
  { 
  	cin >> temp ; 
  	A[temp-1]++ ;
  	if(A[temp-1]>max)
  	{ max=A[temp-1] ; } 
  }
  cout << max ;
  return 0 ;	
} 