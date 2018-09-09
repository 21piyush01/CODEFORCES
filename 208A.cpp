#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  string s ;
  cin >> s ;
  int i,x=0,y=0 ;
  for(i=0;i<s.size();)
  {
  	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
  	{
  	  i+=3 ; y=0 ;
      if(x>0 && y==0)
      { cout << " " ; }
      x=0 ;	
    } 
    else
    {
      cout << s[i] ; i++ ;
      x++ ; y++ ;
    }	
  }	

  return 0 ;	
} 