#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,max=-1,freq=1 ;
  cin >> n ;
  int A[n] ; 
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  cin >> m ;
  int B[m] ; 
  for(i=0;i<m;i++)
  { cin >> B[i] ; }
  for(i=0;i<n;i++)
  { 
  	for(j=0;j<m;j++)
  	{
  	  if(B[j]%A[i]==0)
  	  { 
        if(max<B[j]/A[i])
        { max=B[j]/A[i] ; freq=1 ; }
        else if(max==B[j]/A[i])
        { freq++ ; }
  	  }	
  	} 
  }
  cout << freq ;

  return 0 ;	
} 