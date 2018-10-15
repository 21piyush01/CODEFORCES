#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0,min=0,max=0 ;
  cin >> n >> m ;
  int A[m], B[m] ;
  for(i=0;i<m;i++)
  {	cin >> A[i] ; B[i]=A[i] ; }
  sort(A, A+m) ;
  k=0 ; i=0 ;
  while(k<n)
  {
  	if(A[i]>0)
    {
      min += A[i] ;
      A[i]-- ;
    }
    else
    {
      i++ ;
      if(A[i]>0)
      {
        min += A[i] ;
        A[i]-- ;
      }  	
    }	
    k++ ;  
  }
  k=0 ; j=m-1 ;
  sort(B, B+m) ;
  while(k<n)
  {
  	max += B[j] ;
    B[j]-- ;
    sort(B, B+m) ;
    k++ ;  
  }
  cout << max << " " << min ; 
  return 0 ;	
} 