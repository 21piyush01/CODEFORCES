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
  ll a,b,n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> a >> b >> n ;
  ll num = a*10 ;
  ll res = 0 ;
  for(i=0;i<=9;i++) 
  {
    if((num+i)%b==0) 
    { res = num+i ; }
  }
  if(res) 
  {
    cout << res ;
    for(j=0;j<n-1;j++) 
    { cout << 0 ; }
  }
  else 
  { cout << -1 ; }
  cout << endl ;
  return 0 ;	
}