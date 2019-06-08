#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int x,y,n,m,i,j,k,v,z=0,ans=0 ;
  cin >> n >> v ;
  int B[n] ;
  for(i=0;i<n;i++)
  { B[i]=-1 ; }	
  for(i=0;i<n;i++)
  {
  	z=0 ;
  	cin >> x ;
  	for(j=0;j<x;j++)
  	{ 
  	  cin >> y ; 
      if(v>y)
      { z++ ; B[i]=i+1 ; }	
  	}
  	if(z>0)
  	{ ans++ ; }	
  }
  cout << ans << endl ;	
  if(ans>0)
  {	
    for(i=0;i<n;i++)
    {
      if(B[i]!=-1)
  	  { cout << B[i] << " " ; }	
    }
    cout << endl ;
  }  	
  return 0 ;	
}