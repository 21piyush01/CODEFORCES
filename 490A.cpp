#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a=0,b=0,c=0,n,m,i,j,k,z=0 ;
  cin >> n ;
  int A[n], B[n], C[n], D[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> D[i] ; 
    if(D[i]==1)
    { A[a++]=i+1 ; }
    else if(D[i]==2)
    { B[b++]=i+1 ; }
    else if(D[i]==3)
    { C[c++]=i+1 ; }
  }
  z = (c < ((a<b) ? a : b)) ? c : ((a<b) ? a : b) ; 
  cout << z << endl ;
  for(i=0;i<z;i++)
  { cout << A[i] << " " << B[i] << " " << C[i] << "\n" ; }	
  return 0 ;	
} 
