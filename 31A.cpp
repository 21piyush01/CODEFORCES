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
  cin >> n ;
  long long int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      for(k=0;k<n;k++)
      {
        if(A[i]==A[j]+A[k] && i!=j && j!=k && k!=i)
        { z=1 ; cout << i+1 << " " << j+1 << " " << k+1 << endl ; }  
      }
      if(z==1)
      { break ; }  
    }
    if(z==1)
    { break ; }  
  }  
  if(z==-1)
  { cout << "-1\n" ; }  
  return 0 ;	
}