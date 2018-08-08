#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int N,n,z=1,A[4],count=0,i ;
  cin >> N ;
  while(z)
  {
    N+=1, n=N, count=1 ;
    for(i=0;i<4;i++)
    {
      A[i] = n%10 ;
      n = n/10 ; 
    }
    sort(A, A+4) ;
    for(i=0;i<3;i++)
    {
      if(A[i]!=A[i+1])
      { count++ ; }
    }
    if(count==4)
    { cout << N << endl ; z=0 ; } 
  }  	
  
  return 0 ;	
} 