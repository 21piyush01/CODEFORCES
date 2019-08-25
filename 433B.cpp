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
  ll t,l,r,n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n ;
  ll A[n], S[n+1], U[n+1] ;
  S[0]=0, U[0]=0 ;
  for(i=0;i<n;i++)
  { 
    cin >> A[i] ; 
    S[i+1] = S[i]+A[i] ;
  }
  sort(A, A+n) ;
  for(i=0;i<n;i++)
  { U[i+1] = U[i]+A[i] ; }
  cin >> m ;
  for(i=0;i<m;i++)
  {
    cin >> t >> l >> r ;
    if(t==1)
    { cout << S[r]-S[l-1] << endl ; }
    else if(t==2)
    { cout << U[r]-U[l-1] << endl ; }  
  }  
  return 0 ;	
}