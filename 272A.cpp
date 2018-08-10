#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i,temp,sum=0,count=0 ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
    cin >> temp ;
    sum+=temp ;
  }
  for(i=1;i<6;i++)
  {
  	if((sum+i)%(n+1) != 1)
  	{ count++ ; }	
  }
  cout << count << endl ;	
  return 0 ;	
} 