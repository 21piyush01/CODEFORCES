#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,b,c,n,m,i,j,k,z=0 ;
  cin >> a >> b >> c ;
  int x1, x2, x3, x4, x5, x6 ;
  x1 = a+b+c ;
  x2 = (a+b)*c ;
  x3 = a+(b*c) ;
  x4 = (a*b)+c ;
  x5 = a*(b+c) ;
  x6 = a*b*c ;
  if(x1>=x2 && x1>=x3 && x1>=x4 && x1>=x5 && x1>=x6)
  { z=x1 ; }	
  else if(x2>=x1 && x2>=x3 && x2>=x4 && x2>=x5 && x2>=x6)
  { z=x2 ; }	
  else if(x3>=x1 && x3>=x2 && x3>=x4 && x3>=x5 && x3>=x6)
  { z=x3 ; }	
  else if(x4>=x1 && x4>=x3 && x4>=x2 && x4>=x5 && x4>=x6)
  { z=x4 ; }	
  else if(x5>=x1 && x5>=x3 && x5>=x4 && x5>=x2 && x5>=x6)
  { z=x5 ; }	
  else if(x6>=x1 && x6>=x3 && x6>=x4 && x6>=x5 && x6>=x2)
  { z=x6 ; }	
  cout << z << endl ;
  return 0 ;	
} 