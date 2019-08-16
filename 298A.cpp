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
  string A ; char c ;
  cin >> n >> A ;
  for(i=1;i<n-1;i++)
  {
  	if(A[i]=='L')
  	{ x++ ; }
  	else if(A[i]=='R')
  	{ y++ ; }	
  }	
  if(x==0)
  {
  	for(i=0;i<n;i++)
  	{
  	   if(A[i]=='R')
  	   { cout << i+1 << " " ; break ; }	
  	}
  	for(i=n-1;i>0;i--)
  	{
  	   if(A[i]=='R')
  	   { cout << i+2 << endl ; break ; }	
  	}	
  }
  else if(y==0)
  {
  	for(i=n-1;i>0;i--)
  	{
  	   if(A[i]=='L')
  	   { cout << i+1 << " " ; break ; }	
  	}
  	for(i=0;i<n;i++)
  	{
  	   if(A[i]=='L')
  	   { cout << i << endl ; break ; }	
  	}	
  }
  else 
  {
  	for(i=0;i<n;i++)
  	{
  	   if(A[i]=='R')
  	   { cout << i+1 << " " ; break ; }	
  	}
  	for(i=0;i<n;i++)
  	{
  	   if(A[i]=='L')
  	   { cout << i <<  endl ; break ; }	
  	}	
  }
  return 0 ;	
}