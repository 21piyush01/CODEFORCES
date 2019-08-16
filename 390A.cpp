#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector< pair<int,int> > V ;
    
int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n ;
  ll X[101]={0}, Y[101]={0} ;
  for(i=0;i<n;i++)
  { 
    cin >> x >> y ;
    X[x]++, Y[y]++ ;
  }  
  x=0, y=0 ;
  for(i=0;i<101;i++)
  {
    if(X[i]>0)
    { x++ ; }
    if(Y[i]>0)
    { y++ ; }  
  }  
  z = min(x,y) ;
  cout << z << endl ;
  return 0 ;	
}