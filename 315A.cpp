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
  ll A[n], B[n], C[100]={0} ;
  for(i=0;i<n;i++)
  { cin >> A[i] >> B[i] ; }  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(A[i]==B[j] && i!=j)
      { z++ ; break ; }  
    }  
  }  
  cout << n-z << endl ; 
  return 0 ;	
}