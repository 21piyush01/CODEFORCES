#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k,z ;
  cin >> n >> z ;
  float max=0,total=k,sum=0,avg=0 ;   
  int i,j,A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; } 	
  for(k=z;k<=n;k++)
  {	
    for(i=0;i<=n-k;i++)
    {
  	  sum=0 ;
  	  for(j=0+i;j<k+i;j++)
  	  { sum += A[j] ; }
      avg = sum/total ;
  	  if(max<avg)
  	  { max=avg ; }	
    }
  } 
  printf("%.9f",max); ;	
  return 0 ;	
} 