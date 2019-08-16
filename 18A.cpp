#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007
#define MAX 1000003

typedef long long int ll ;
typedef pair<int, int> ii ;
vector<int> points ;
vector<ii> v ;

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int a,b,c,n,m,i,j,k,x=0,y=0,z=0 ;
  long long int X1,Y1,X2,Y2,X3,Y3,m1,m2,m3 ;
  cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 ;
  a = (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) ;
  b = (X2-X3)*(X2-X3) + (Y2-Y3)*(Y2-Y3) ;
  c = (X3-X1)*(X3-X1) + (Y3-Y1)*(Y3-Y1) ;
  if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
  { cout << "RIGHT\n" ; z=1 ; }
  else  
  {
    a = ((X1-1)-X2)*((X1-1)-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-(X1-1))*(X3-(X1-1)) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = ((X1+1)-X2)*((X1+1)-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-(X1+1))*(X3-(X1+1)) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + ((Y1-1)-Y2)*((Y1-1)-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-(Y1-1))*(Y3-(Y1-1)) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + ((Y1+1)-Y2)*((Y1+1)-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-(Y1+1))*(Y3-(Y1+1)) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-(X2-1))*(X1-(X2-1)) + (Y1-Y2)*(Y1-Y2) ;
    b = ((X2-1)-X3)*((X2-1)-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-(X2+1))*(X1-(X2+1)) + (Y1-Y2)*(Y1-Y2) ;
    b = ((X2+1)-X3)*((X2+1)-X3) + (Y2-Y3)*(Y2-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-(Y2-1))*(Y1-(Y2-1)) ;
    b = (X2-X3)*(X2-X3) + ((Y2-1)-Y3)*((Y2-1)-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-(Y2+1))*(Y1-(Y2+1)) ;
    b = (X2-X3)*(X2-X3) + ((Y2+1)-Y3)*((Y2+1)-Y3) ;
    c = (X3-X1)*(X3-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-(X3-1))*(X2-(X3-1)) + (Y2-Y3)*(Y2-Y3) ;
    c = ((X3-1)-X1)*((X3-1)-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-(X3+1))*(X2-(X3+1)) + (Y2-Y3)*(Y2-Y3) ;
    c = ((X3+1)-X1)*((X3+1)-X1) + (Y3-Y1)*(Y3-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-(Y3-1))*(Y2-(Y3-1)) ;
    c = (X3-X1)*(X3-X1) + ((Y3-1)-Y1)*((Y3-1)-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    a = (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) ;
    b = (X2-X3)*(X2-X3) + (Y2-(Y3+1))*(Y2-(Y3+1)) ;
    c = (X3-X1)*(X3-X1) + ((Y3+1)-Y1)*((Y3+1)-Y1) ;
    if((a==b+c || b==c+a || c==a+b) && a>0 && b>0 && c>0)
    { cout << "ALMOST\n" ; z=1 ; return 0 ; }
    if(z==0)
    { cout << "NEITHER\n" ; }  
  }  
  return 0 ;	
}