#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);    
  int n,m,i,j,a,b,star,count=0 ;
  cin >> n >> m ;
  int v[n]={0} ;
  for(i=0;i<m;i++)
  {
    cin >> a >> b ;
    v[a-1]=1, v[b-1]=1 ;
  }
  for(i=0;i<n;i++)
  {
  	if(v[i]==0)
  	{ star=i+1 ; count++ ; }	
  }	
  if(count==0)
  { cout << -1 ; }
  else
  {
  	cout << n-1 << endl ;
  	for(i=0;i<n;i++)
  	{	
  	  if(star!=i+1)	
  	  { cout <<	star << " " << i+1 << endl ; }
  	}	
  }	
  return 0 ;	
} 