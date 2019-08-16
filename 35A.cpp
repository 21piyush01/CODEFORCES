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
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n ;
  long long int A[3]={0} ;
  A[n-1]=1 ;
  for(i=0;i<3;i++)
  {
    cin >> x >> y ;
    m = A[x-1] ;
    A[x-1] = A[y-1] ;
    A[y-1] = m ;
  }
  for(i=0;i<3;i++)
  {
    if(A[i]==1)
    { cout << i+1 << endl ; break ; }  
  }    
  return 0 ;	
}