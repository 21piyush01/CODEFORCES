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
  long long int a,b,r,n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> a >> b >> r ;
  n = min(a,b) ;
  m = max(a,b) ;
  if(2*r>n)
  { cout << "Second\n" ; }  
  else
  { cout << "First\n" ; }  
  return 0 ;	
}