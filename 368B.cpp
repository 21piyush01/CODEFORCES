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
  cin >> n >> m ;
  ll A[n], D[n], C[100000]={0} ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=n-1;i>=0;i--)
  {
    C[A[i]-1]++ ;
    if(C[A[i]-1]==1)
    { y++ ; }
    D[i]=y ;  
  }
  for(i=0;i<m;i++)  
  { 
    cin >> x ; 
    cout << D[x-1] << endl ;
  }  
  return 0 ;	
}