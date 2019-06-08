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
  cin >> n >> m ;
  string s ;
  int A[n][m] ;
  for(i=0;i<n;i++)
  {
  	cin >> s ;
  	for(j=0;j<m;j++)
  	{
  	  if(s[j]=='.')
  	  { A[i][j]=0 ; }
  	  else if(s[j]=='S')
  	  { A[i][j]=1 ; }	
  	} 
  }
  for(i=0;i<n;i++)
  {
  	z=0 ;
  	for(j=0;j<m;j++)
  	{
  	  if(A[i][j]==0)
  	  { z++ ; }	
  	}
  	if(z==m)
  	{ 
  	  for(j=0;j<m;j++)
  	  { A[i][j]=2 ; ans++ ; } 
  	}	
  }
  for(i=0;i<m;i++)
  {
  	z=0 ;
  	for(j=0;j<n;j++)
  	{
  	  if(A[j][i]!=1)
  	  { z++ ; }	
  	}
  	if(z==n)
  	{ 
  	  for(j=0;j<n;j++)
  	  { 
  	  	if(A[j][i]==0)
  	  	{ 
  	  	  A[j][i]=2 ; 
  	  	  ans++ ;
  	  	}     
  	  } 
  	}	
  }
/*
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{ cout << A[i][j] << " " ; }
  	cout << endl ;	
  }	
*/
  cout << ans << endl ;	
  return 0 ;	
} 