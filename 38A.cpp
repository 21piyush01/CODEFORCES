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
  cin >> n ;
  ll A[n-1], D[n] ;
  D[0]=0 ;
  for(i=0;i<n-1;i++)
  { 
    cin >> A[i] ;
    D[i+1] = D[i]+A[i] ; 
  }
  cin >> a >> b ;  
  cout << D[b-1]-D[a-1] << endl ;
  return 0 ;	
}