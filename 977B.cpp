#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i,j,max=-1,mi ;
  cin >> n ;
  string s ;
  cin >> s ; 
  int t[n-1]={0} ;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n-1;j++)
    {
       if(s[j]==s[i] && s[j+1]==s[i+1])
       { t[i]++ ; }	
    }	
  }
  for(i=0;i<n-1;i++)
  {
  	if(t[i]>max)
  	{
  	  max = t[i] ;
  	  mi = i ;	
  	}	
  }  	
  cout << s[mi] << s[mi+1] ;
  return 0 ;	
} 