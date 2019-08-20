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
  cin >> s ;
  n = s.size() ;
  for(i=0;i<n-1;i++)
  {
    if(s[i]=='0')
    { z++ ; }
    if(!(z==1 && s[i]=='0'))
    { cout << s[i] ; }  
  }  
  if(z!=0)
  { cout << s[n-1] ; }  
  cout << endl ;
  return 0 ;	
}