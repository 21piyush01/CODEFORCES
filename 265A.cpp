#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int l1,l2,n,m,i,j,k,z=0 ;
  string s1, s2 ;
  cin >> s1 >> s2 ;
  l1 = s1.size() ;
  l2 = s2.size() ;
  i=0, j=0 ;
  while(j<l2)
  {
    if(s1[i]==s2[j])
    { i++ ; }
    j++	;
  }
  cout << i+1 << endl ;
  return 0 ;	
}