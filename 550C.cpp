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
  for(i=0;i<n;i++)
  {
    if((s[i]-48)%2==1)
    { x++ ; } 
    if((s[i]-48)==8)
    { y++ ; } 
    if((s[i]-48)==0)
    { z++ ; }  
  }  
  if(x==n)
  { cout << "NO\n" ; }
  else  
  {
    if(y>0)
    { cout << "YES\n" << 8 << endl ; }
    else if(z>0)
    { cout << "YES\n" << 0 << endl ; }
    else
    {
      z=0 ;
      // 2-digt
      for(i=0;i<n-1;i++)
      {
        for(j=i+1;j<n;j++)
        {
          if(((10*(s[i]-48))+(s[j]-48))%8==0)
          { cout << "YES\n" << ((10*(s[i]-48))+(s[j]-48)) << endl ; z=1 ; break ; }  
        }
        if(z==1)
        { break ; }  
      }
      // 3-digit
      if(z!=1)
      {  
        for(i=0;i<n-2;i++)
        {
          for(j=i+1;j<n-1;j++)
          {
            for(k=j+1;k<n;k++)
            {  
              if(((100*(s[i]-48))+(10*(s[j]-48))+(s[k]-48))%8==0)
              { cout << "YES\n" << ((100*(s[i]-48))+(10*(s[j]-48))+(s[k]-48)) << endl ; z=1 ; break ; }  
            }
            if(z==1)
            { break ; }  
          }
          if(z==1)
          { break ; }
        }
      }  
      if(z==0)
      { cout << "NO\n" ; }  
    }  
  }  
  return 0 ;	
}