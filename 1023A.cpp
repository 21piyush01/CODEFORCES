#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll i=0,j=0,n,m,count=0,z=0,k=0 ;
  cin >> n >> m ; 
  ll ind=n ;
  string s1,s2 ;
  cin >> s1 >> s2 ;
  if(n>m+1)
  { cout << "NO" ; }
  else
  { 
    for(int i = 0; i < n; ++i)
    {
    	if(s1[i]=='*')
    	{ ind = i ;  }	
    }
    for(int i = 0; i <= ind-1; ++i)
    {
        if(s1[i]!=s2[i])
        { z=1 ; }	
    }
    for(int i = 0; i < n-ind-1; ++i)
    {
        if(s1[n-1-i]!=s2[m-1-i])
        { z=1 ; }	
    }
    if(z==1)
    { cout << "NO" ; }
    else
    { cout << "YES" ; }	
  }
  return 0 ;	
} 