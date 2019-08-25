#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector< pair<int,int> > V ;
    
ll modu(ll n)
{
  if(n>=0)
  { return n%MOD ; }
  else
  { return (MOD+n)%MOD ; }  
}

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> x >> y >> n ;
  if(x==0 && y==0)
  { cout << 0 << endl ; }
  else  
  {
    ll F[6] ;
    F[0]=modu(x), F[1]=modu(y) ;
    F[2] = modu(F[1]-F[0]) ; 
    F[3] = modu(-1*x) ;
    F[4] = modu(-1*y) ;
    F[5] = modu(F[0]-F[1]) ;  
    cout << F[(n-1)%6] << endl ;
  }
  return 0 ;	
}