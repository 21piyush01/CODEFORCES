#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,j,n,A[12],count=0,z=1,result=0 ;
  cin >> n ;
  for(i=0;i<12;i++)
  { cin >> A[i] ; }
  sort(A, A+12) ;
  if(n==0)
  { cout << 0 ; }
  else
  {	
    for(i=11;i>=0;i--)
    { 
      count += A[i] ; result++ ; 
   	  if(count>=n)
   	  { cout << result ; z=0 ; break ; } 
    } 
    if(z)
    { cout << -1 ; }	
  }
  return 0 ;	
} 