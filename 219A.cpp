#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int k,i,j,n,l,z=1,A[26]={0},B[26]={0},min=MAX ;
  string s ;
  cin >> k >> s ;
  n = s.size() ;
  for(i=0;i<n;i++)
  {	A[s[i]-97]++ ; }	
  for(i=0;i<26;i++)
  {
  	if(A[i]%k==0)
  	{ 
  	  B[i] = A[i]/k ;
  	  if(B[i]<min && B[i]>0)
  	  { min = B[i] ; } 	 
  	}
  	else
  	{ B[i] = -1 ; z=-1 ; }
  } /*
  for(i=0;i<26;i++)
  {	cout << A[i] << " " << B[i] << endl ; }	*/
  if(min<1)
  { cout << -1 ; }
  else if(z==-1)
  { cout << -1 ; }	
  else
  {
  	for(j=0;j<k;j++)
  	{
  	  for(i=0;i<26;i++)
  	  {
        for(l=0;l<B[i];l++)
        { 
        	char c = i+97 ;
        	cout <<  c ;
        }
      }
  	}	
  }
  return 0 ;	
} 