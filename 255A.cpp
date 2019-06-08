#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int a=0,b=0,c=0,n,m,i,j,k,z=0 ;
  cin >> n ;
  for(i=0;i<n;i++)
  { 
  	cin >> m ;
  	if(i%3==0)
  	{ a+=m ; }
  	else if(i%3==1)
  	{ b+=m ; }
  	else
  	{ c+=m ; }	
  }	
  if(a>b && a>c)
  { cout << "chest\n" ; }	
  else if(b>a && b>c)
  { cout << "biceps\n" ; }	
  else if(c>a && c>b)
  { cout << "back\n" ; }	
  return 0 ;	
}