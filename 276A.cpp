#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int f,t,n,m,i,j,k,z=-999999999,x ;
  cin >> n >> k ;
  for(i=0;i<n;i++)
  { 
  	cin >> f >> t ; 
    if(t>k)
    { x = f-(t-k) ; }
    else
    { x = f ; }
	if(x>=z)
	{ z=x ; }	
  }	
  cout << z << endl ;
  return 0 ;	
}