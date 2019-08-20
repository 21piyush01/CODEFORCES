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
  ll n,m,i,j,k,x=0,y=0,z=1 ;
  cin >> n >> k ;
  ll A[n] ;
  for(i=0;i<n;i++)
  { 
    cin >> A[i] ; 
    if(i<k)
    { x+=k ; }  
  }  
  m = x ;
  for(i=k;i<n;i++)
  {
    m = m+A[i]-A[i-k] ;
    if(m<x)
    { x=m ; z=i-k+2 ; }  
  }
  cout << z << endl ;  
  return 0 ;	
}