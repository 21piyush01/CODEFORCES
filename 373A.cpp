#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,z=1,A[4][4],B[9]={0} ;
  string s ;
  cin >> k ;
  //cout << k << "@ " ;
  for(i=0;i<4;i++)
  {
  	cin >> s ;
  	//cout << s << "!! " ;	
  	for(j=0;j<4;j++)
  	{
  	  if(s[j]=='.')
  	  { A[i][j]=0 ; }
  	  else
  	  { A[i][j] = s[j]-48 ; }	
  	}	
  }/*
  for(i=0;i<4;i++)
  {
  	for(j=0;j<4;j++)
  	{ cout << A[i][j] << " " ; }
    cout << endl ;
  }*/
  for(i=0;i<4;i++)
  {
  	for(j=0;j<4;j++)
  	{ B[A[i][j]-1]++ ; }
  }
  for(i=0;i<9;i++)
  { 
  	//cout << B[i] << " " ;
  	if(B[i]>(2*k))
  	{ z=0 ; }	
  }
  if(z==0)
  { cout << "NO\n" ; }
  else
  { cout << "YES\n" ; }	
  return 0 ;	
} 