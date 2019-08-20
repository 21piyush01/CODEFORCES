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
  ll n=0,m=0,i,j,k,x=0,y=0,z=-1 ;
  string s ; char c ;
  ll t,sx,sy,ex,ey ;
  cin >> t >> sx >> sy >> ex >> ey >> s ;
  x = ex-sx ;
  y = ey-sy ;
  if(x>0)
  {
    if(y>0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='E')
        { n++ ; }
        if(s[i]=='N')
        { m++ ; }
        if(n>=x && m>=y)
        { z=i+1 ; break ; }  
      }  
    }
    else if(y<0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='E')
        { n++ ; }
        if(s[i]=='S')
        { m++ ; }
        if(n>=x && m>=-y)
        { z=i+1 ; break ; }  
      } 
    }
    else
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='E')
        { n++ ; }
        if(n>=x)
        { z=i+1 ; break ; }  
      } 
    }  
  }
  else if(x<0)  
  {
    if(y>0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='W')
        { n++ ; }
        if(s[i]=='N')
        { m++ ; }
        if(n>=-x && m>=y)
        { z=i+1 ; break ; }  
      }  
    }
    else if(y<0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='W')
        { n++ ; }
        if(s[i]=='S')
        { m++ ; }
        if(n>=-x && m>=-y)
        { z=i+1 ; break ; }  
      } 
    }
    else
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='W')
        { n++ ; }
        if(n>=-x)
        { z=i+1 ; break ; }  
      } 
    }
  }
  else
  {
    if(y>0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='N')
        { m++ ; }
        if(m>=y)
        { z=i+1 ; break ; }  
      }  
    }
    else if(y<0)
    {
      for(i=0;i<t;i++)
      { 
        if(s[i]=='S')
        { m++ ; }
        if(m>=-y)
        { z=i+1 ; break ; }  
      } 
    }
  }  
  cout << z << endl ;  
  return 0 ;	
} 