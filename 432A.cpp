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
  cin >> n >> k ;
  int A[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	if(A[i]<=5-k)
  	{ z++ ; } 
  }
  cout << z/3 << endl ;
  return 0 ;	
}