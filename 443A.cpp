#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0 ;
  string s ;
  getline(cin, s) ;
  n = s.length() ;
  int A[26]={0} ;
  for(i=0;i<n;i++)
  {
  	 if(s[i]>=97 && s[i]<=122)
  	 { A[s[i]-97]++ ; }
  }	
  for(i=0;i<26;i++)
  { 
     if(A[i]>0)
     { z++ ; }	
  }
  cout << z << endl ;
  return 0 ;	
} 