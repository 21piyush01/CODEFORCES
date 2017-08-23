#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;

int main()
{
  int i,j,k,n,z=0,max=-1 ;
  cin >> n ; 
  string A ;
  cin >> A ;
  for(i=0;i<n;i++)
  { 
    k=i ; 
    for(j=i+1;j<n;j++)
    {
      if(A[i]!=A[j])
      {
        break ;
      }
      else if(A[i]==A[j])
      {
        z++ ; k++ ;
      }  
    }
    i = k ;
  }  
  cout << z ; 
  return 0 ; 
} 