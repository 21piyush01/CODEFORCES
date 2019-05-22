#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,p,q,i,j,k,z=1 ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { A[i]=0 ; }	
  cin >> p ;
  for(i=0;i<p;i++)
  { cin >> k ; A[k-1]=1 ; }	
  cin >> q ;
  for(i=0;i<q;i++)
  { cin >> k ; A[k-1]=1 ; }	
  for(i=0;i<n;i++)
  {
  	 if(A[i]==0)
  	 { z=0 ; break ; }	
  }	
  if(z==0)
  { cout << "Oh, my keyboard!" << endl ; }	
  else
  { cout << "I become the guy." << endl ; }		
  return 0 ;	
} 
