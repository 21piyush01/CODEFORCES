#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll n,m,i,j,k,z=0,a=1,b=1,ans ;
  cin >> n ;
  ll A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  sort(A, A+n) ;	
  z = A[n-1]-A[0] ;
  if(z!=0)
  {
    i=1 ; j=n-2 ;
    while(A[0]==A[i])
    { a++ ; i++ ; }
    while(A[n-1]==A[j])
    { b++ ; j-- ; }
    ans = a*b ; 
    cout << z << " " << ans ;	
  }
  else
  { 
    ans = (n*(n-1))/2 ;
    cout << z << " " << ans ;
  }  
  return 0 ;  	
} 