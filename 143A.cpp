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
  long long int a,b,c,d,r1,r2,c1,c2,d1,d2 ;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2 ;
  for(a=1;a<=9;a++)
  {
    for(b=1;b<=9;b++)
  	{	
  	  if(a!=b)
  	  {	
  	    for(c=1;c<=9;c++)
  	    {
  		  if(c!=a && c!=b)
  		  {	
  		    for(d=1;d<=9;d++)
  	        {
    	      if(a+b==r1 && a+c==c1 && a+d==d1 && c+d==r2 && b+d==c2 && b+c==d2 && d!=a && d!=b && d!=c)
  		      { z=1 ; cout << a << " " << b << endl << c << " " << d << endl ; }	
    	    }
    	  }  
    	}
      }
    }  	
  }	
  if(z==0)
  { cout << -1 << endl ; }	
  return 0 ;	
} 

// string s ;
// getline(cin, s) ; WHEN STRING INPUT WITH SPACES & COMMAS
// cin >> s ; FOR ELSE CASES