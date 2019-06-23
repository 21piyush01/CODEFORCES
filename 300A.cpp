#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,z=0,a=0,b=0,c=0 ;
  cin >> n ;
  int A[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; }
  sort(A,A+n) ;
  for(i=0;i<n;i++)
  {
  	if(A[i]<0)
    { a++ ; }
    else if(A[i]==0)
    { b++ ; }
    else
    { c++ ; }	
  }	
  cout << 1 << " " << A[0] << endl ;
  if((a-1)%2==1)
  {	
    cout << c+a-2 << " " ;
    for(i=2;i<n;i++)
    {
  	  if(A[i]!=0)
      { cout << A[i] << " " ; }	
    }	
    cout << endl ;
    cout << b+1 << " " << A[1] << " " ;
    for(i=2;i<n;i++)
    {
      if(A[i]==0 )
  	  { cout << A[i] << " " ; }	
    }	
   cout << endl ;
  }
  else
  {	
    cout << c+a-1 << " " ;
    for(i=1;i<n;i++)
    {
  	  if(A[i]!=0)
      { cout << A[i] << " " ; }	
    }	
    cout << endl ;
    cout << b << " " << " " ;
    for(i=1;i<n;i++)
    {
      if(A[i]==0 )
  	  { cout << A[i] << " " ; }	
    }	
   cout << endl ;
  }	
  return 0 ;	
}