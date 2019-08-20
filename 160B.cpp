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
  cin >> n >> s ;
  ll A[n], B[n] ;
  for(i=0;i<n;i++)
  { A[i] = s[i]-48 ; }    
  for(i=0;i<n;i++)
  { B[i] = s[i+n]-48 ; }
  sort(A, A+n) ;
  sort(B, B+n) ;
  for(i=0;i<n;i++)    
  {
    if(A[i]<B[i])
    { x++ ; }
    if(A[i]>B[i])
    { y++ ; }  
  } 
  if(x==n || y==n)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; } 
  return 0 ;	
}