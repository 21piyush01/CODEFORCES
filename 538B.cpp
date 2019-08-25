#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector<int> V ;
    
int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll N,i,j,k,x=0,y=0,z=0 ;
  cin >> N ;
  while(N)
  {
    ll n=N, m=0, p=1 ;
    while(n)
    {
      if(n%10)
      { m+=p ; }
      n /= 10 ;
      p *= 10 ;  
    }
    V.push_back(m) ;
    N -= m ;  
  }  
  cout << V.size() << endl ;
  sort(V.begin(),V.end()) ;
  for(i=0;i<V.size();i++)
  { cout << V[i] << " " ; }
  cout << endl ;  
  return 0 ;	
}