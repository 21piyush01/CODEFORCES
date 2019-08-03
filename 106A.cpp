#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007
#define MAX 1000003

typedef long long int ll ;
typedef pair<int, int> ii ;
vector<int> points ;
vector<ii> v ;

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  string s1, s2 ; char c ;
  cin >> c >> s1 >> s2  ;
  s1[0] = s1[0]=='6' ? '1' : s1[0] ; 
  s1[0] = s1[0]=='7' ? '2' : s1[0] ; 
  s1[0] = s1[0]=='8' ? '3' : s1[0] ; 
  s1[0] = s1[0]=='9' ? '4' : s1[0] ; 
  s1[0] = s1[0]=='T' ? '5' : s1[0] ; 
  s1[0] = s1[0]=='J' ? '6' : s1[0] ; 
  s1[0] = s1[0]=='Q' ? '7' : s1[0] ; 
  s1[0] = s1[0]=='K' ? '8' : s1[0] ; 
  s1[0] = s1[0]=='A' ? '9' : s1[0] ; 
  s2[0] = s2[0]=='6' ? '1' : s2[0] ; 
  s2[0] = s2[0]=='7' ? '2' : s2[0] ; 
  s2[0] = s2[0]=='8' ? '3' : s2[0] ; 
  s2[0] = s2[0]=='9' ? '4' : s2[0] ; 
  s2[0] = s2[0]=='T' ? '5' : s2[0] ; 
  s2[0] = s2[0]=='J' ? '6' : s2[0] ; 
  s2[0] = s2[0]=='Q' ? '7' : s2[0] ; 
  s2[0] = s2[0]=='K' ? '8' : s2[0] ; 
  s2[0] = s2[0]=='A' ? '9' : s2[0] ; 
  if(s1[1]==c)
  {
    if(s2[1]!=c)
    { z=1 ; }	
	else
	{
	  if(s1[0]>s2[0])
	  { z=1 ; }	
	}	
  }	
  else
  {
    if(s1[1]==s2[1])
    {
      if(s1[0]>s2[0])
	  { z=1 ; }	
    } 
  }
  if(z==1)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }	
  return 0 ;	
}