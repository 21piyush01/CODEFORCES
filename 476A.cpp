#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,x,y,t=0,z=0 ;
  cin >> n >> m ;
  if(n<m)
  { cout << -1 << endl ; }
  else
  {	
  	t = ((n%2)==0) ? n/2 : ((n/2)+1) ;
  	while(t%m!=0)
  	{ t += 1 ; }	
    cout << t << endl ;
  }
  return 0 ;	
}