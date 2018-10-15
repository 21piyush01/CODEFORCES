#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  string s ;
  int n,m,i,j,k,z=0 ;
  cin >> n >> m ;
  char A[n][m], B[n][m] ;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  	  if((i+j)%2==0)
  	  { A[i][j] = 'B' ; }
  	  else
  	  { A[i][j] = 'W' ; } 	
  	}	
  }
  for(i=0;i<n;i++)
  {
    cin >> s ;
    for(j=0;j<m;j++)
    { B[i][j] = s[j] ; }	
  }	
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  	  if(B[i][j]!='-')
  	  { B[i][j] = A[i][j] ; }
  	}	
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{ cout << B[i][j] ; }
  	cout <<	endl ;
  }
  return 0 ;	
} 