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
  ll l,r,n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n >> x >> y ;
  m = y-x ;
  ll A[m]={0} ;
  for(j=0;j<n-1;j++)
  {
    cin >> l >> r ;
    if(l<=x && r>=y)
    {
      for(i=0;i<m;i++)
      { A[i]=1 ; }  
    }
    else if(l<=x && r>=x && r<=y)
    {
      for(i=0;i<r-x;i++)
      { A[i]=1 ; }  
    }
    else if(l>=x && l<=y && r>=y)
    {
      for(i=l-x;i<m;i++)
      { A[i]=1 ; } 
    }
    else if(l>=x && l<=y && r>=x && r<=y)
    {
      for(i=l-x;i<r-x;i++)
      { A[i]=1 ; }
    }  
  }  
  for(i=0;i<m;i++)
  { 
    if(A[i]==0)
    { z++ ; }  
  }
  cout << z << endl ; 
  return 0 ;	
}