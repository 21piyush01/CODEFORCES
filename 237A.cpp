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
  string s ; char c ;
  ll n,m,i,j,k,x=1,y=0,z=1 ;
  cin >> n ;
  ll H[n], M[n] ;
  for(i=0;i<n;i++)
  { cin >> H[i] >> M[i] ; }  
  for(i=1;i<n;i++)
  {
    if(H[i]==H[i-1] && M[i]==M[i-1])
    { x++ ; }
    else
    { x=1 ; }  
    z = max(z,x) ;
  }  
  cout << z << endl ;
  return 0 ;	
}