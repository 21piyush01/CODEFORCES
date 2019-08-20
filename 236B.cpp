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
  ll sum=0,n,m,i,j,k,x,y,z ;
  m = 1073741824 ;
  cin >> x >> y >> z ;
  ll A[(x*y*z)+1]={0} ;
  for(i=1;i<=x;i++)
  {
    for(j=1;j<=y;j++)
    {
      for(k=1;k<=z;k++)
      { 
        n = ((i*j*k)%m) ;
        ll a, b=sqrt(n), c=0 ;
        if(A[n]==0)
        {  
          for(a=1;a<=b;a++)
          {
            if(n%a==0)
            { c++ ; }  
          }
          c = 2*c ;
          if(b*b==n)
          { c-- ; }
          A[n]=c ;
        }
        else
        { c=A[n] ; }  
        sum+=c ; 
      }  
    }  
  }  
  cout << sum << endl ;
  return 0 ;	
}