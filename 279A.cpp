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
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> x >> y ;
  if(y<=0 && x>=1+y && x<=1-y)
  { cout << (-y)*4 << endl ; }
  else if(x>0 && y>=2-x && y<=x)
  { cout << x*4-3 << endl ; }
  else if(y>0 && x>=-y && x<=y-1)
  { cout << y*4-2 << endl ; }
  else if(x<0 && y>=x && y<=-1-x)
  { cout << (-x)*4-1 << endl ; }
  else
  { cout << 0 << endl ; }
  return 0 ;	
}