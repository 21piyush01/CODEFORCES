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
  string s[4] ; char c ;
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  for(i=0;i<4;i++)
  { cin >> s[i] ; }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      x=0, y=0 ;
      if(s[i][j]=='.')
      { x++ ; }
      if(s[i+1][j]=='.')
      { x++ ; }
      if(s[i][j+1]=='.')
      { x++ ; } 
      if(s[i+1][j+1]=='.')
      { x++ ; }
      if(s[i][j]=='#')
      { y++ ; }
      if(s[i+1][j]=='#')
      { y++ ; }
      if(s[i][j+1]=='#')
      { y++ ; } 
      if(s[i+1][j+1]=='#')
      { y++ ; }
      if(x>=3 || y>=3)
      { z=1 ; break ; }  
    }
    if(z==1)
    { break ; }  
  }  
  if(z==1)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }  
  return 0 ;	
}