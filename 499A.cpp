#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int l,r,n,m,i,j,k,x,s=0,w=0,t=1 ;
  cin >> n >> x ;
  for(i=0;i<n;i++)
  { 
  	cin >> l >> r ; 
  	if(l >= t+x)
  	{ 
  		s=((l-t)/x) ; 
  		t=(t+(s*x)) ;
  	//	cout << s << " " << t << " " ;
  	}
  	w += (r-t+1) ;
  	t += (r-t+1) ;
  	//cout << w << " " << t << endl ;	
  }	
  cout << w << endl ;
  return 0 ;	
}