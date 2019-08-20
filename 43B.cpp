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
  ll n,m,i,j,k,x=0,y=0,z=1 ;
  string s1, s2 ; char c ;
  ll A[52]={0}, B[52]={0} ;
  getline(cin ,s1) ;
  getline(cin ,s2) ;
  n = s1.size() ;
  m = s2.size() ;
  for(i=0;i<n;i++)
  {
    if(s1[i]>=65 && s1[i]<=90)
    { A[s1[i]-65]++ ; } 
    else if(s1[i]>=97 && s1[i]<=122)
    { A[(s1[i]-97)+26]++ ; } 
  }  
  for(i=0;i<m;i++)
  {
    if(s2[i]>=65 && s2[i]<=90)
    { B[s2[i]-65]++ ; } 
    else if(s2[i]>=97 && s2[i]<=122)
    { B[(s2[i]-97)+26]++ ; } 
  }
  for(i=0;i<52;i++)
  {
    if(B[i]>A[i])
    { z=0 ; break ; }  
  }  
  if(z==1)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }  
  //cout << s1 << endl << endl << s2 << endl ;
  return 0 ;	
}