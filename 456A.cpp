#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  vector< pair <int, int> > V ;
  int n,m,i,j,k,z=0 ;
  cin >> n ;
  int A[n], B[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] >> B[i] ; }	
  for(i=0;i<n;i++)
  { V.push_back(make_pair(A[i], B[i])) ; }
  sort(V.begin(), V.end()) ;
  for(i=1;i<n;i++)
  { 
  	if(V[i-1].first<V[i].first && V[i-1].second>V[i].second)
    { z=1 ; break ; }
  }
  if(z==1)
  { cout << "Happy Alex\n" ; }
  else
  { cout << "Poor Alex\n" ; } 
  return 0 ;	
}