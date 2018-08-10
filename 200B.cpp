#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i ;
  cin >> n ;
  float temp,sum=0 ;
  for(i=0;i<n;i++)
  { cin >> temp ; sum+=temp ; }
  cout << sum/n ;
    	
  
  return 0 ;	
} 