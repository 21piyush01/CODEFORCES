#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int a,b,i,j,k,x=0,y=0,z=0 ;
  cin >> a >> b ;
  for(i=1;i<=6;i++)
  {
    if(abs(a-i)<abs(b-i))
    { x++ ; }
    else if(abs(a-i)>abs(b-i))
    { z++ ; }
    else
    { y++ ; }	
  }
  cout << x << " " << y << " " << z << endl ;
  return 0 ;	
}