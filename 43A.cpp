#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i,c1=0,c2=0 ;
  cin >> n ;
  char s[15],s1[15],s2[15] ;
  for(i=0;i<n;i++)
  {
  	cin >> s ;
  	if(i==0)
  	{ strcpy(s1,s) ; c1++ ; }
  	else
  	{
      if(strcmp(s,s1)==0)
      { c1++ ; }
      else
      { 
      	if(c2==0)
      	{ strcpy(s2,s) ; } 
        c2++ ; 
      }	
  	}	
  }
  if(c1>c2)
  { cout << s1 ; }
  else { cout << s2 ; }	
  return 0 ;	
} 