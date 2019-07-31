#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,d,z=1 ;
  cin >> k >> d ;
  if(k>1 && d==0)
  { cout << "No solution" <<  endl ; }
  else
  {	
    cout << d ;
    for(i=0;i<k-1;i++)
    { cout << 0 ; }
    cout << endl ;	
  }
  return 0 ;	
} 