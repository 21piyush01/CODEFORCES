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
  long long int n,m,p,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> p ;
  n = p-1 ;
  long long int count = n ;
  for(i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      do { n/=i ; } 
      while(n%i==0) ;
      count = count/i*(i-1) ;
    }
  }
  if(n!=1)
  { count = count/n*(n-1) ; }
  cout << count << endl ;
  return 0 ;	
} 