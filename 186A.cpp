#include <bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> points;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x,y,z=0 ;
  string s1, s2 ;
  cin >> s1 >> s2 ;
  long long int l1, l2, A[26]={0}, B[26]={0} ;
  l1 = s1.size() ;
  l2 = s2.size() ;
  if(l1!=l2)
  { cout << "NO\n" ; }
  else
  {
  	for(i=0;i<l1;i++)
  	{
  	  if(s1[i]!=s2[i])
  	  { z++ ; y=i ; }	
  	}
  	if(z==2)
  	{ 
  		for(i=0;i<l1;i++)
  		{
  	  		if(s1[i]!=s2[i])
  	  		{ x=i ; break ; }	
  		}
  		if(s1[x]==s2[y] && s1[y]==s2[x])
  		{ cout << "YES\n" ; }
  		else
	  	{ cout << "NO\n" ; } 
  	}
    else
  	{ cout << "NO\n" ; }	
  }	
  return 0 ;	
}