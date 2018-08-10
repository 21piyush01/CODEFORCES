#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  string s1,s2,s3 ;
  cin >> s1 >> s2 >> s3 ;
  if(s1.size()+s2.size() != s3.size())
  { cout << "NO" ; }
  else  	
  {
  	int i,z=1,A[26]={0}, B[26]={0} ;
  	for(i=0;i<s1.size();i++)
  	{ A[s1[i]-65]++ ; }
  	for(i=0;i<s2.size();i++)
  	{ A[s2[i]-65]++ ; }
  	for(i=0;i<s3.size();i++)
  	{ B[s3[i]-65]++ ; }
  	for(i=0;i<26;i++)
  	{
  	  if(A[i]!=B[i])
  	  { z=0 ; break ; }	
  	}
  	if(z==0)
  	{ cout << "NO" ; }
  	else
  	{ cout << "YES" ; }	
  }
  return 0 ;	
} 