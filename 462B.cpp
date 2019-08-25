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
  ll n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n >> k >> s ;
  ll A[26]={0} ;
  for(i=0;i<n;i++)
  { A[s[i]-65]+=1 ; }  
  sort(A, A+26) ;
  i=25 ;
  while(k>0)
  {
    if(k>A[i])
    { z = z+(A[i]*A[i]) ; k-=A[i] ; i-- ; }
    else
    { z = z+(k*k) ; k=0 ; i-- ; }  
  }  
  cout << z << endl ;
  return 0 ;	
}