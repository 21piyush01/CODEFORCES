#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,a,b,k=0,z=0 ;
  cin >> n ;
  int A[n][n] ;
  string s ;
  for(i=0;i<n;i++)
  {	
  	cin >> s ;
  	for(j=0;j<n;j++)
  	{ A[i][j] = s[j]-97 ; }	
  }
  a = A[0][0] ; 
  b = A[0][1] ;
  for(i=0;i<n;i++)
  {
    if(A[i][i]==a)
    { z++ ; }
    if(A[i][n-1-i]==a)
    { z++ ; }
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  	  if(A[i][j]==b)
  	  { k++ ; }  	
  	}	
  }	
  if(z==2*n && k==((n*n)-n-n+1) && a!=b)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }	
  return 0 ;	
}