#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;

int main()
{
 string A ;
 cin >> A ;
 if(A[0]>=97 && A[0]<=122)
 { A[0]-=32 ; }
 cout << A ;
 return 0 ; 
} 