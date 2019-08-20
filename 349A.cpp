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
  ll n,m,i,j,k=1,x=0,y=0,z=0 ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
    cin >> m ;
    if(m==25)
    { x+=1 ; }
    else if(m==50)
    {
      if(x>=1)
      { x-=1, y+=1 ; }
      else
      { k=-1 ; }  
    } 
    else if(m==100)
    {
      if(x>=1 && y>=1)
      { x-=1, y-=1, z+=1 ; }  
      else if(x>=3)
      { x-=3, z+=1 ; }
      else
      { k=-1 ; }  
    } 
  }  
  if(k==1)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }  
  return 0 ;	
}