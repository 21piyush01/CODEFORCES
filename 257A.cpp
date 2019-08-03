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
  long long int n,m,i,j,k,x=0,y=0,z=-1 ;
  string s ; char c ;
  cin >> n >> m >> k ;
  int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  sort(A, A+n) ;
  if(m<=k)	
  { z=0 ; }
  else	
  {
  	i=n-1 ;
  	while(i>=0 && A[i]>1)
  	{
       if(k+A[i]-1>=m)
       { z = n-i ; break ; }
       else
       { k = k+A[i]-1 ; }
       i-- ;	
  	}	
  }	
  cout << z << endl ; 		
  return 0 ;	
}