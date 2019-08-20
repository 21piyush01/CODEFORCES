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
  { cin >> A[i] ; }
  sort(A, A+n) ;
  for(i=n-1;i>=0;i--)
  { z = z + abs(i+1-A[i]) ; }  
  cout << z << endl ;
  return 0 ;	
}