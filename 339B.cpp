#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m ;
  cin >> n >> m ;
  int i,j,temp,prev=1 ;
  ll count=0 ;
  for(i=0;i<m;i++)
  { 
  	cin >> temp ;
  	if(temp>=prev)
  	{ count = count+temp-prev ; }
    else
    { count = count+n-prev+temp ; }	
    prev = temp ;
  }
  cout << count << endl ;
  return 0 ;	
} 