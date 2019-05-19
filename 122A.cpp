#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k=0,z=1 ;
  cin >> n ;
  int q[1000] ;
  for(i=1;i<=1000;i++)
  {
  	 z=1, j=i ;
	 while(j>0)
     {
  	   if(j%10!=7 && j%10!=4)
  	   { z=0 ; break ; }
  	   j = j/10 ;	
     }
     if(z==1)
     { q[k++]=i ; } 
  }
  z=0 ;
  for(i=0;i<k;i++)
  {
  	if(n%q[i]==0)
  	{ z=1 ; break ; }	
  }	
  if(z==0)
  { cout << "NO\n" ; }
  else
  { cout << "YES\n" ; }	
  return 0 ;	
} 