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
  for(i=1;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      m = sqrt(i*i + j*j) ;
      if((m*m == i*i + j*j) && m<=n)
      { z++ ; }  
    }  
  }  
  cout << z << endl ;
  return 0 ;	
}