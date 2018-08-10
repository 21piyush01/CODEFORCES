#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,l=0,r=0,a,b,result=0 ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
    cin >> a >> b ;
    if(a==0) { l++ ; }
    if(b==0) { r++ ; }
  }
  result += l<n-l ? l : n-l ; 
  result += r<n-r ? r : n-r ;   	
  cout << result ;
  return 0 ;	
} 