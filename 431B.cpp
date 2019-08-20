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
  ll n,m=0,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  ll G[5][5] ;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    { cin >> G[i][j] ; }  
  }  
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(j!=i)
      {  
        for(k=0;k<5;k++)
        {
          if(k!=i && k!=j)
          {  
            for(x=0;x<5;x++)
            {
              if(x!=i && x!=j && x!=k)
              {  
                for(y=0;y<5;y++)
                {
                  if(y!=x && y!=i && y!=j && y!=k)
                  {
                    m = (G[i][j]+G[j][i]+G[k][x]+G[x][k]) + (G[k][j]+G[j][k]+G[y][x]+G[x][y]) + (G[k][x]+G[x][k]) + (G[y][x]+G[x][y]) ;
                    z = max(z,m) ;
                  }  
                }  
              }  
            }
          }  
        }  
      }
    }    
  }
  cout << z << endl ;  
  return 0 ;	
}