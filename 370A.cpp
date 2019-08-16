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
  long long int n,m,i,j,x=0,y=0,z=0 ;
  string s ; char c ;
  ll r1,c1,r2,c2,r=0,b=0,k=0 ;
  cin >> r1 >> c1 >> r2 >> c2 ;
  if(r1==r2)
  {
  	r = 1 ;
  	k = c2-c1>0 ? c2-c1 : c1-c2 ; 
  	if(((r1+c1)%2)==((r2+c2)%2))
  	{ b=2 ; }
  }
  else if(c1==c2)
  {
  	r = 1 ;
  	k = r2-r1>0 ? r2-r1 : r1-r2 ; 
  	if(((r1+c1)%2)==((r2+c2)%2))
  	{ b=2 ; }
  }
  else
  {
  	r = 2 ;
  	x = c2-c1>0 ? c2-c1 : c1-c2 ; 
  	y = r2-r1>0 ? r2-r1 : r1-r2 ; 
  	k = max(x,y) ;
  	if(((r1+c1)%2)==((r2+c2)%2))
  	{
  	  if(x==y)
  	  { b=1 ; }
  	  else
  	  { b=2 ; }	
  	}
  }
  cout << r << " " << b << " " << k << endl ; 
  return 0 ;	
}