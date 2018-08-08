#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  string s ;
  cin >> s ;
  int i,j ;
  for(i=0;i<s.size();)
  {
    if(s[i]=='.')
    { 
      cout << 0 ;
      i++ ; 
    } 
    else
    {
      if(s[i+1]=='.')
      { cout << 1 ; }
      else
      { cout << 2 ; }
      i+=2 ;	
    }	
  }
  
    	
  
  return 0 ;	
} 