#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int l,r,n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> m ;
  int A[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	if(A[i]==1)
  	{ x++ ; }
  	else
  	{ y++ ; } 
  }
  for(i=0;i<m;i++)
  {
  	cin >> l >> r ;
  	k = r-l+1 ;
  	if(k%2==0)
  	{	
  		if(k/2<=x && k/2<=y)
  		{ cout << 1 << endl ; }	
  		else
  		{ cout << 0 << endl ; }
  	}
  	else
  	{ cout << 0 << endl ; }		
  }	
  return 0 ;	
}