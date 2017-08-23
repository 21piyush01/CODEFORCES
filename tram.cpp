#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;

int main()
{
  int i,n,z=0,max=-1 ;
  cin >> n ; 
  int A[n],B[n] ;
  for(i=0;i<n;i++)
  {
     cin >> A[i] ;
     z -= A[i] ;
     max = z>=max ? z : max ;
     cin >> B[i] ;
     z += B[i] ;
     max = z>=max ? z : max ;
  } 
  cout << max ;
  return 0 ; 
} 