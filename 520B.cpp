#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,count=0,c1=0,c2=0,a,b ;
  cin >> n >> m ;
  if(n==m)
  { cout << count ; }	
  else if(n>m)
  {
  	count += (n-m) ;
  	cout << count ;
  }
  else
  {
  

  }	
  return 0 ;	
} 