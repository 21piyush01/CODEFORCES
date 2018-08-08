#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n,c ;
  cin >> n >> c ;
  long long int a,i,b,count=0 ;
  for(i=0;i<n;i++)
  {
  	cin >> b ;
  	if(i==0)
  	{ count++ ; }
  	else
  	{
  	  if(b-a <= c)
  	  { count++ ; }
  	  else
  	  { count=1 ; }
  	}
  	a = b ;	
  }
  cout << count ;
  return 0 ;	
} 