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
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n ;
  ll A[100001], B[100001], P[100001] ;
  for(i=0;i<100001;i++)
  { A[i]=0, B[i]=0, P[i]=-1 ; }    
  for(i=0;i<n;i++)
  { 
    ll temp ;
    cin >> temp ;
    A[temp]++ ;
    if(A[temp]==1)
    { P[temp] = 0 ; }
    else if(A[temp]==2)
    { P[temp] = i-B[temp] ; }
    else if(A[temp]>2)
    { P[temp] = P[temp]==i-B[temp] ? P[temp] : -1 ; }
    B[temp]=i ;     
  }
  for(i=0;i<100001;i++)
  {
    if(P[i]!=-1)
    { z++ ; }  
  }
  cout << z << endl ;
  for(i=0;i<100001;i++)
  {
    if(P[i]!=-1)
    { cout << i << " " << P[i] << endl ; }  
  }  
  return 0 ;	
} 