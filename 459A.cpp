#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,b,c,d,x1,x2,x3,x4,y1,y2,y3,y4,n,m,i,j,k,z=0 ;
  cin >> x1 >> y1 >> x2 >> y2 ;
  a = x2-x1, b = y2-y1, c = -1*a, d = -1*b ;
  if(a==0)
  {
    y3 = y1 ;
    y4 = y2 ;
    x3 = x1+b ;
    x4 = x2+b ;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl ;
  }
  else if(b==0)
  {
    x3 = x1 ;
    x4 = x2 ;
    y3 = y1+a ;
    y4 = y2+a ;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl ;
  }
  else if(b==a)
  {
    x3 = x2 ;
    y3 = y1 ;
    x4 = x1 ;
    y4 = y2 ;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl ;
  }
  else if(b==a*(-1))
  {
    x3 = x2 ;
    y3 = y1 ;
    x4 = x1 ;
    y4 = y2 ;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl ;
  }	
  else
  { cout << -1 << endl ; }	
  return 0 ;	
} 