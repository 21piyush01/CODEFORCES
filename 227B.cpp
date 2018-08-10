#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,temp ;
  cin >> n ;
  int A[n]={0},i,j ; 
  ll c1=0,c2=0 ;
  for(i=0;i<n;i++)
  { 
  	cin >> temp ;
    A[temp-1]=i ;
  }
  cin >> m ;
  //int B[m],j ;
  for(i=0;i<m;i++)
  { 
  	cin >> temp ;  
    c1 = c1+A[temp-1]+1 ;
    c2 = c2+n-A[temp-1] ;
  }
  cout << c1 << " " << c2 ;

  return 0 ;	
} 