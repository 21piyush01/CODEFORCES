#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,a,b,i,j,k,r=0,z=0,min=9999999,x,y ;
  cin >> n >> m >> a >> b ;
  if(n%m==0)
  { k=(n/m), r=0 ; }	
  else
  { k=((n/m)+1), r=1 ; }	
  for(i=0;i<=k;i++)
  { 
    y = i ;
    x = (n-(m*y))>0 ? (n-(m*y)) : 0 ;
    z = a*x + b*y ;
    if(min>z && z>0)
    { min = z ; }	
    //cout << z << endl ;
  }	
  cout << min << endl ;
  return 0 ;	
} 