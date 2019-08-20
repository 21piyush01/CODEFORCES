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
  cin >> n >> k ;
  ll A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=k;i<n;i++)
  {
    if(A[i]!=A[i-1])
    { z=-1 ; break ; }  
  }
  if(z!=-1)
  {
    for(i=k-2;i>=0;i--)
    {
      if(A[i]==A[k-1])
      { x++ ; }
      else
      { break ; }  
    }
    z = k-1-x ;  
  }
  cout << z << endl ; 
  return 0 ;	
}