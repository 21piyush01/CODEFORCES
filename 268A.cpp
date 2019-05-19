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
  cin >> n ;
  int H[n], G[n] ;
  for(i=0;i<n;i++) 
  { cin >> H[i] >> G[i] ; }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  	   if(j!=i && H[i]==G[j])
  	   { z++ ; }	
  	}	
  }	
  cout << z << endl ;
  return 0 ;	
} 