#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,s,i,j,z=0,a,b ;
  cin >> s >> n ;
  vector< pair <int,int> > vect ;
  for(i=0;i<n;i++)
  { 
    cin >> a >> b ;
    vect.push_back( make_pair(a,b) ) ; 
  }
  sort(vect.begin(), vect.end()) ;
  i=0 ;
  while(s > vect[i].first && i<n)    
  {
  	s += vect[i].second ;
  	z++ ; i++ ;
  }
  if(z==n)
  { cout << "YES\n" ; }
  else
  { cout << "NO\n" ; }	
  return 0 ;	
} 