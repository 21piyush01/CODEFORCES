#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int count=1,A[4],i ;
  for(i=0;i<4;i++)
  { cin >> A[i] ; } 
  sort(A,A+4) ;
  for(i=1;i<4;i++)
  {
  	if(A[i]!=A[i-1])
  	{ count++ ; }	
  } 
  cout << 4-count ;
  return 0 ;	
} 