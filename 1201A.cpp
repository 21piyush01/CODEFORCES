#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007
#define MAX 1000003

typedef long long int ll ;
typedef pair<int, int> ii ;
vector<int> points ;
vector<ii> v ;

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> m ;
  string s[n], ans ; char c ;
  for(i=0;i<n;i++)
  { cin >> s[i] ; }  
  int A[m] ;
  for(i=0;i<m;i++)
  { cin >> A[i] ; }  
  int X[m][5] ;
  for(i=0;i<m;i++)
  {
    for(j=0;j<5;j++)
    { X[i][j]=0 ; }  
  }  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(s[i][j]=='A')
      { X[j][0]++ ; }
      else if(s[i][j]=='B')
      { X[j][1]++ ; }
      else if(s[i][j]=='C')
      { X[j][2]++ ; } 
      else if(s[i][j]=='D')
      { X[j][3]++ ; }
      else if(s[i][j]=='E')
      { X[j][4]++ ; } 
    }  
  }  
  for(i=0;i<m;i++)
  {
    if(X[i][0]>=X[i][1] && X[i][0]>=X[i][2] && X[i][0]>=X[i][3] && X[i][0]>=X[i][4])
    { ans += 'A' ; }
    else if(X[i][1]>=X[i][0] && X[i][1]>=X[i][2] && X[i][1]>=X[i][3] && X[i][1]>=X[i][4])
    { ans += 'B' ; }
    else if(X[i][2]>=X[i][0] && X[i][2]>=X[i][1] && X[i][2]>=X[i][3] && X[i][2]>=X[i][4])
    { ans += 'C' ; }
    else if(X[i][3]>=X[i][0] && X[i][3]>=X[i][2] && X[i][3]>=X[i][2] && X[i][3]>=X[i][4])
    { ans += 'D' ; }
    else if(X[i][4]>=X[i][0] && X[i][4]>=X[i][1] && X[i][4]>=X[i][2] && X[i][4]>=X[i][3])
    { ans += 'E' ; }
  }  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(s[i][j]==ans[j])
      { z += A[j] ; }
    }  
  }  
  cout << z << endl ;
  return 0 ;	
}