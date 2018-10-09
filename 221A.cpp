#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i ;
  cin >> n ;
  int A[n] ;
  A[0]=n ;
  for(i=1;i<n;i++)
  { A[i]=i ; }
  for(i=0;i<n;i++)
  { cout << A[i] << " " ; }	
  return 0 ;	
}