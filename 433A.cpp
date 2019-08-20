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
  ll n,m,i,j,k=0,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n ;
  for(i=0;i<n;i++)
  { 
    cin >> m ;
    k+=m ;
    if(m==100)
    { x++ ; }
    else
    { y++ ; }
  } 
  k/=100 ;
  if((k/2)%2==1) 
  {
    if(x%2==0 && x>1)
    { z=1 ; }  
  }  
  else
  {
    if(x==2*y)
    { z=1 ; }
    else if(x<2*y)
    {
      if(x%2==0)
      {
        j = 2*y - x ;
        if(j%4==0)
        { z=1 ; }  
      }  
    }
    else
    {
      if(x%2==0)
      {
        j = x - 2*y ;
        if(j%2==0)
        { z=1 ; } 
      }  
    }  
  }  
  //cout << x << " " << y << " " << k << " " << j << endl ;
  if(z==1)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }  
  return 0 ;	
}