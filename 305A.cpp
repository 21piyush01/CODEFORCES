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
  long long int n,m,i,j,k,u=0,v=0,w=0,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> n ;
  int A[n], B[n] ;
  for(i=0;i<n;i++)
  { 
    cin >> A[i] ; 
    if(A[i]==0 && x==0)
    { B[z++]=A[i], x=1 ; }
    else if(A[i]==100 && y==0)
    { B[z++]=A[i], y=1 ; }
    else if(A[i]%10==0 && u==0)
    { B[z++]=A[i] ; u=1 ; }
    else if(A[i]>=1 && A[i]<=9 && v==0)
    { B[z++]=A[i] ; v=1 ; }
  }
  if(u==0 && v==0)
  {
    for(i=0;i<n;i++)
    { 
      if(A[i]!=0 && A[i]!=100)
      { B[z++]=A[i] ; break ; }  
    }  
  } 
  cout << z << endl ;
  for(i=0;i<z;i++)
  { cout << B[i] << " " ; }
  cout << endl ; 
  return 0 ;	
}