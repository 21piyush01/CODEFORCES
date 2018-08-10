#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,min,max,count=0,temp ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
  	cin >> temp ;
    if(i==0)
    { min=temp, max=temp ; }
    else
    {
      if(temp<min)
      { min=temp ; count++ ; }
      else if(temp>max)
      { max=temp ; count++ ; }	
    }	
  }
  cout << count ;
  return 0 ;	
} 