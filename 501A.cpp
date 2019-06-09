#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int a,b,c,d,n,m,i,j,k,z=0 ;
  cin >> a >> b >> c >> d ;
  int maxa = ((3*a/10)>(a-(a*c/250))) ? (3*a/10) : (a-(a*c/250)) ;  	
  int maxb = ((3*b/10)>(b-(b*d/250))) ? (3*b/10) : (b-(b*d/250)) ;  	
  if(maxa>maxb)
  { cout << "Misha\n" ; }
  else if(maxa<maxb)
  { cout  << "Vasya\n" ; }
  else	
  { cout << "Tie\n" ; }
  return 0 ;	
}