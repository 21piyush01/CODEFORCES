#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector< pair<int,int> > V ;
    
bool sortbycust(const pair<int,int> &a, const pair<int,int> &b) 
{ 
  if(a.first>b.first) return true ;
  if(a.first==b.first) return a.second<b.second ;
  return false ; 
} 

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll n,m=0,i,j,k,x=1,y=1,z=0,p,t ;
  cin >> n >> k ;
  for(i=0;i<n;i++)
  { 
    cin >> p >> t ;
    V.push_back(make_pair(p,t)) ; 
  } 
  sort(V.begin(), V.end(), sortbycust) ;
  // cout << endl << V[n-1].first << " " << V[n-1].second << " " << x << " " << y << endl ;
  for(i=1;i<n;i++)
  {
    if(V[i].first<V[i-1].first)
    { 
      x = x+y ; 
      if(x>k && m==0)
      { z=y, m=1 ; }  
      y=1 ; 
    }
    else if(V[i-1].first==V[i].first) 
    {
      if(V[i].second>V[i-1].second)
      { 
        x = x+y ; 
        if(x>k && m==0)
        { z=y, m=1 ; }  
        y=1 ; 
      }
      else if(V[i-1].second==V[i].second)
      { y++ ; }  
    }
    // cout << V[i-1].first << " " << V[i-1].second << " " << x << " " << y << endl ;
  }
  if(m==0)
  { z=y, m=1 ; }  
  cout << z << endl ;
  return 0 ;	
}