#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector< pair<int,int> > V ;
    
int main()
{
  fr ; fw ;
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> m ;
  k = min(n,m) ;
  if(n>m)
  {
    for(i=0;i<k;i++)
    { cout << "BG" ; }  
    for(i=0;i<n-k;i++)
    { cout << "B" ; }  
  }  
  else
  {
    for(i=0;i<k;i++)
    { cout << "GB" ; }  
    for(i=0;i<m-k;i++)
    { cout << "G" ; }  
  }  
  cout << endl ;
  return 0 ;	
}