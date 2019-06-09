#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,z=0 ;
  cin >> n >> m ;
  int A[n][m], B[n]={0} ;
  for(i=0;i<n;i++)
  { 
  	string s ;
  	cin >> s ;
  	for(j=0;j<m;j++)
  	{ A[i][j] = s[j] ; } 
  } 
  for(j=0;j<m;j++)
  {
  	k=-1 ;
  	for(i=0;i<n;i++)
  	{
       if(A[i][j]>=k)
       { k=A[i][j] ; } 
  	}
  	for(i=0;i<n;i++)
  	{
       if(A[i][j]==k)
       { B[i]++ ; } 
  	}
  }	
  for(i=0;i<n;i++)
  {
  	if(B[i]>0)
  	{ z++ ; }	
  }
  cout << z << endl ;	
  return 0 ;	
}