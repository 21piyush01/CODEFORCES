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
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n ;
  ll A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; x+=A[i] ; }  
  if(x%n==0)
  { cout << n << endl ; }
  else
  { cout << n-1 << endl ; }  
  return 0 ;	
}