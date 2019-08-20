#include <bits/stdc++.h>
using namespace std ;

bool helper(long long int* arr, long long int n, long long int start, long long int lsum, long long int rsum) 
{ 
  if(start == n) 
  { return lsum == rsum ; } 
  if(arr[start]%5 == 0) 
  { lsum += arr[start] ; } 
  else if(arr[start]%3 == 0) 
  { rsum += arr[start] ; } 
  else
  { return helper(arr, n, start+1, lsum+arr[start], rsum) || helper(arr, n, start+1, lsum, rsum+arr[start]) ; }
  return helper(arr, n, start+1, lsum, rsum) ; 
} 
  
bool splitArray(long long int* arr, long long int n) 
{ return helper(arr, n, 0, 0, 0) ; } 

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,i,z=1 ;
  cin >> n ;
  long long int x,A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  if(splitArray(A, n)) 
  { cout << "YES\n" ; } 
  else
  { cout << "NO\n" ; }  
  return 0 ;	
}