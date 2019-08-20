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
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  cin >> s ;
  n = s.size() ;
  int A[26]={0} ;
  for(i=0;i<n;i++)
  { A[s[i]-97]++ ; }  
  for(i=0;i<26;i++)
  {
    if(A[i]%2==0)
    { x++ ; }
    else
    { y++ ; }  
  }  
  if(y%2==1 || y==0)
  { cout << "First\n" ; }  
  else
  { cout << "Second\n" ; }     
  return 0 ;	
}