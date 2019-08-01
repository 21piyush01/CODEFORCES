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
  long long int maxi = 2000000000 ;
  long long int mini = -2000000000 ;
  char c ;
  string s ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
  	cin >> s >> m >> c ;
    if(s==">=")
    {
      if(c=='Y')
      { mini = mini>m ? mini : m ; }
      else
      { maxi = maxi<m-1 ?maxi : m-1 ; } 
    }
    else if(s=="<=")
    {
      if(c=='Y')
      { maxi = maxi<m ? maxi : m ; }
      else
      { mini = mini>m+1 ? mini : m+1 ; }
    }
    else if(s==">")
    {
      if(c=='Y')
      { mini = mini>m+1 ? mini : m+1 ; }
      else
      { maxi = maxi<m ? maxi : m ; }
    }
    else
    {
      if(c=='Y')
      { maxi = maxi<m-1 ? maxi : m-1 ; }
      else
      { mini = mini>m ? mini : m ; }	
    }	
  }	
  if(maxi>=mini)
  { cout << mini << endl ; }
  else
  { cout << "Impossible\n" ; }	
  return 0 ;	
}