#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector<int> V ;
    
int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> m ;
  if(m==0 && n==1)
  { cout << 0 << " " << 0 << endl ; }  
  else if(m==0 && n>1)
  { cout << -1 << " " << -1 << endl ; }  
  else if(m>9*n)
  { cout << -1 << " " << -1 << endl ; }  
  else
  {
    // MIN
    i=n, j=m-1 ;
    while(i>0)
    { 
      k = j<9 ? j : 9 ;
      V.push_back(k) ;
      j-=k, i-- ;
    }
    cout << V[n-1]+1 ;
    for(i=n-2;i>=0;i--)
    { cout << V[i] ; }  
    cout << " " ;
    
    // MAX
    i=n, j=m ; 
    for(z=1;z<n;z++)
    { y*=10 ; } 
    while(i>0)
    { 
      k = j<9 ? j : 9 ;
      cout << k ; 
      j-=k, i-- ;
    }
    cout << endl ;
  }  
  return 0 ;	
}