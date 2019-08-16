#include <bits/stdc++.h>
using namespace std ;

const int maxn = 2010 ;
int n, m, k, p, q, a[maxn][maxn], d[maxn][maxn] ;

bool solve(int x, int y, int r) 
{
  for(int i=max(1, x-r); i<=min(n, x+r); i++) 
  {
    int t = r-abs(i-x) ;
    if(y-t>=1 && !a[i][y-t]) 
    { 
      p=i, q=y-t ; 
      return 1 ; 
    }
    if(y+t<=m && !a[i][y+t]) 
    { 
      p=i, q=y+t ; 
      return 1 ; 
    }
  }
  return 0 ;
}

int main() 
{
  cin >> n >> m >> k ;
  for(int i=1,x,y; i<=k; i++) 
  {
    cin >> x >> y ;
    for(int j=-1; j<=1; j++) 
    {
      for(int k=-1; k<=1; k++) 
      {
        if(x+j<1 || x+j>n || y+k<1 || y+k>m) continue;
        d[x][y] = max(d[x][y], d[x+j][y+k]-abs(j)-abs(k)) ;
      }
    }
    while(!solve(x, y, d[x][y])) d[x][y]++ ;
    cout << p << " " << q << endl ;
    a[p][q]=1 ;
  }
  return 0 ;
}