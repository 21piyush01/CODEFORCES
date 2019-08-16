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
  int n,m,i,j,k,x=0,y=0,z=0 ;
  string s, temp="" ; char c ;
  cin >> s ;
  int A[26]={0} ;
  n = s.size() ;
  for(i=0;i<n;i++)
  { A[s[i]-97]++ ; }  
  int N,I,T,E ;
  N = A[13] ;
  I = A[8] ;
  T = A[19] ;
  E = A[4] ;

  x = min(min(E/3,N/3),min(I,T)) ;
  y = min(min(E/3,(N-1)/2),min(I,T)) ;
  /*
  for(i=0;i<=n-8;i++)
  {
    temp = "" ;
    for(j=i;j<i+8;j++)
    { temp += s[j] ; }
    if(temp=="nineteen")
    { y++ ; }  
  }  
  if(x>y)
  { z=x ; } 
  else if(x<y)
  { z=y ; }
  else
  { z= } 
  */
  z = max(x,y) ;
  cout << z << endl ;
  return 0 ;	
}