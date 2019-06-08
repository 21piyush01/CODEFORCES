#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0,ans=0 ;
  cin >> n ;
  string s ;
  int A[n+2][n+2] ;
  for(i=0;i<n+2;i++)
  {
  	for(j=0;j<n+2;j++)
  	{ A[i][j]=1 ; }	
  }
  for(i=1;i<=n;i++)
  {
  	cin >> s ;
  	for(j=0;j<n;j++)
  	{
  	  if(s[j]=='o')
  	  { A[i][j+1]=0 ; }
  	  else if(s[j]=='x')
  	  { A[i][j+1]=1 ; }	
  	} 
  }
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n;j++)
  	{
  	  z=0 ;	
  	  if(A[i+1][j]==0)
  	  { z++ ; }
  	  if(A[i-1][j]==0)
  	  { z++ ; }
  	  if(A[i][j-1]==0)
  	  { z++ ; }
  	  if(A[i][j+1]==0)
  	  { z++ ; }
  	  if(z%2==0)
  	  { ans++ ; }	
  	}	
  }	
  if(ans==n*n)
  { cout << "YES" << endl ; }
  else
  { cout << "NO" << endl ; }	
  return 0 ;	
}