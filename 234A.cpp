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
  fr ; fw ;
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int i,j,n,x=0 ;
  string s ; char c ;
  cin >> n >> s ;
  int A[n/2][2] ;
  for(i=0;i<n/2;i++)
  { A[i][0]=0, A[i][1]=0 ; }
  for(i=0;i<n/2;i++)
  {
    if(s[i]=='L')
    { A[x][0]=i+1, A[x][1]=i+(n/2)+1 ; }
    else if(s[i]=='R')
    { A[x][1]=i+1, A[x][0]=i+(n/2)+1 ; }
    x++ ;  
  }  
  for(i=0;i<n/2;i++)
  { cout << A[i][0] << " " << A[i][1] << endl ; }  
  return 0 ;	
} 