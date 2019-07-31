#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  string s ;
  cin >> s ;
  n = s.size() ;
  for(i=0;i<n;i++)
  { 
  	if(s[i]=='^')
  	{ m=i ; } 
  }	
  for(i=m-1;i>=0;i--)
  {
    if(s[i]!='=')
    { x += ((s[i]-48)*(m-i)) ; }	
  }	
  for(i=m+1;i<n;i++)
  {
  	if(s[i]!='=')
    { y += ((s[i]-48)*(i-m)) ; }	
  }	
  if(x>y)
  { cout << "left\n" ; }
  else if(x<y)
  { cout << "right\n" ; }	
  else
  { cout << "balance\n" ; }
  return 0 ;	
} 