#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int s,v1,v2,t1,t2,A,P ;
  cin >> s >> v1 >> v2 >> t1 >> t2 ;
  A = t1+t1+(s*v1) ;
  P = t2+t2+(s*v2) ;
  if(A<P)
  { cout << "First" ; }
  else if(A>P) 	
  { cout << "Second" ; }
  else
  { cout << "Friendship" ; } 
  return 0 ;	
} 