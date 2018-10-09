#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,a,b,i,j,z=0 ;
  cin >> n >> a >> b ;
  z = z+a+1 ;
  while(n-z > b)
  {	z++ ; }	
  cout << n-z+1 ;
  return 0 ;	
} 