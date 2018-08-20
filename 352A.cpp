#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i,j ;
  cin >> n ;
  int A=0,B=0,temp ;
  for(i=0;i<n;i++) 
  {
  	cin >> temp ;
  	if(temp==5)
  	{ A++ ; }
  	else
  	{ B++ ; }	
  }
  if(B==0)
  { cout << -1 ; }
  else if(A<9 && B>0)
  { cout << 0 ; }
  else
  {
  	A = A - A%9 ;
  	for(i=0;i<A;i++)
  	{ cout << 5 ; }
  	for(i=0;i<B;i++)
  	{ cout << 0 ; }	
  }	
  return 0 ;	
} 