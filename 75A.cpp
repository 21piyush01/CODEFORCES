#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int a=0,b=0,c=0,p,n,m,i=1,j,k,z=0 ;
  cin >> n >> m ;
  p = n+m ;
  while(n>0)
  {
  	j=n%10 ;
  	if(j!=0)
  	{
  	  a += i*j ;
  	  i*=10 ; 	
  	}
  	n/=10 ;	
  }	
  i=1 ;
  while(m>0)
  {
  	j=m%10 ;
  	if(j!=0)
  	{
  	  b += i*j ;
  	  i*=10 ; 	
  	}
  	m/=10 ; 	
  }
  i=1 ;
  while(p>0)
  {
  	j=p%10 ;
  	if(j!=0)
  	{
  	  c += i*j ;
  	  i*=10 ; 	
  	}
  	p/=10 ;	
  }
  //cout << a << " " << b << " " << c ;
  if(a+b==c)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }	
  return 0 ;	
} 