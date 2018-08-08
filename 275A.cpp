#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,b,c,d,e,f,g,h,i ;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i ;
  int A = ((a+b+d)%2 + 1)%2 ;  	
  int B = ((a+b+c+e)%2 + 1)%2 ;  	
  int C = ((c+b+f)%2 + 1)%2 ;  	
  int D = ((a+e+d+g)%2 + 1)%2 ;  	
  int E = ((e+b+d+f+h)%2 + 1)%2 ;  	
  int F = ((c+e+f+i)%2 + 1)%2 ;  	
  int G = ((g+h+d)%2 + 1)%2 ;  	
  int H = ((g+e+h+i)%2 + 1)%2 ;  	
  int I = ((i+f+h)%2 + 1)%2 ;  	
  cout << A << B << C << endl ;
  cout << D << E << F << endl ;
  cout << G << H << I << endl ;
  return 0 ;	
} 