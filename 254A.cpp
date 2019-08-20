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
  ll n,m,i,j,k,x=0,y=0,z=1 ;
  cin >> n ;
  ll A[2*n] ;
  for(i=0;i<2*n;i++)
  { cin >> A[i] ; V.push_back(make_pair(A[i],i+1)) ; }
  sort(V.begin(), V.end()) ;
  for(i=0;i<2*n;i+=2)
  {
    if(V[i].first!=V[i+1].first)
    { z=-1 ; }  
  }  
  if(z==-1)
  { cout << z << endl ; }
  else
  {
    for(i=0;i<2*n;i+=2)
    { cout << V[i].second << " " << V[i+1].second << endl ; }   
  }  
  return 0 ;	
}