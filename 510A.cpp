#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0 ;
  cin >> n >> m ;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  	  if(i%2==0)
  	  { cout << "#" ; }
  	  else
  	  {
  	  	if(((i+1)%4)==0)
  	  	{ 
  	  	  if(j==0)
  	  	  { cout << "#" ; }
  	  	  else
  	  	  { cout << "." ; } 
  	  	}
  	  	else
  	  	{
  	  	  if(j==m-1)
  	  	  { cout << "#" ; }
  	  	  else
  	  	  { cout << "." ; }	
  	  	}	
  	  }  	
  	}
  	cout << endl ;	
  }	
  return 0 ;	
} 