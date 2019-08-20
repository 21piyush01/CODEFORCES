#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007

typedef long long int ll ;
vector< pair<int,int> > V ;
    
int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  string s ; char c ;
  ll n,m,i,j,k,x=-1,y=-1,z=-1 ;
  cin >> n ;
  ll L[n], R[n] ;
  for(i=0;i<n;i++)
  { 
    cin >> L[i] >> R[i] ; 
    if(x==-1 && y==-1)
    { x=L[i], y=R[i] ; }
    if(L[i]<x)
    { x=L[i] ; }
    if(R[i]>y)
    { y=R[i] ; }  
  }  
  for(i=0;i<n;i++)
  { 
    if(L[i]<=x && R[i]>=y)
    { z=i+1 ; }  
  }
  cout << z << endl ;
  return 0 ;	
}