#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int c,n,m,i,j,k,z=0 ;
  cin >> n >> c ;
  int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  for(i=1;i<n;i++)
  {
    int t = A[i-1]-A[i]-c ;
    if(t>=z)
    { z=t ; }
  }	
  cout << z << endl ;
  return 0 ;	
}