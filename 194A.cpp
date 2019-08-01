#include <bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> points;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x,y,z=0 ;
  cin >> n >> k ;	
  int A[n] ;
  for(i=0;i<n;i++)
  { A[i]=2 ; }	
  if(n*2==k)
  { cout << n << endl ; }
  else	
  {
  	x = (k-(2*n)) ;
  	if(x>n)
  	{ cout << 0 << endl ; }
  	else
  	{ cout << n-x << endl ; } 
  }
  return 0 ;	
}