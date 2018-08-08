#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  string s ;
  cin >> s ;
  int i,small=0,big=0 ;
  for(i=0;s[i];i++)
  {
  	if(s[i]<95)
  	{ big++ ; }
  	else
  	{ small++ ; }	
  }
  if(small>=big)
  {
  	for(i=0;s[i];i++)
  	{ 
  	  if(s[i]<95)
  	  { s[i]+=32 ; }
  	  cout << s[i] ;
  	}	
  }  	
  else
  {
  	for(i=0;s[i];i++)
  	{ 
  	  if(s[i]>95)
  	  { s[i]-=32 ; }
  	  cout << s[i] ;
  	}	
  }  		
  return 0 ;	
} 