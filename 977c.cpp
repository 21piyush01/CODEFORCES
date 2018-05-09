#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  long long int p[n],i ;
  for(i=0;i<n;i++)
  { cin >> p[i] ; }    
  sort(p, p+n);
  if(k==0)
  { 
    if(p[0]>1)
    { cout << 1 ; }
    else
    { cout << -1 ; } 
  }	
  else if(k==n)
  { cout << p[n-1] ; }
  else
  {	
   if(p[k]-p[k-1]==0)
   { cout << -1 ; }
   else if(p[k]-p[k-1]>=1)
   { cout << p[k-1] ; }
  }
  return 0 ;	
} 