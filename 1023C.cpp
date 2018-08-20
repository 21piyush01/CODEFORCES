#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  ll n,k,i,j,count=0 ;
  cin >> n >> k ;
  string s ;
  cin >> s ;
  if(n==k)
  { cout << s ; }
  else
  {
  	ll A[n] ;
  	vector< pair <int,int> > V ;
    for(i=0;i<n;i++)
  	{ 
  	  if(s[i]=='(')
  	  { A[i] = -1 ; }
  	  else
  	  { A[i] = 1 ; }	
  	}
    for(i=0;i<n;i++)
    { V.push_back( make_pair(A[i],i) ) ; }
    sort(V.begin(), V.end()); 
    vector< pair <int,int> > V1 ;
    for(i=0;i<k/2;i++)
    { V1.push_back( make_pair(V[i].second,V[i].first) ) ; }
    for(i=0;i<k/2;i++)
    { V1.push_back( make_pair(V[(n/2)+i].second,V[(n/2)+i].first) ) ; }
    sort(V1.begin(), V1.end()); 
    for(i = 0; i < k; ++i)
    {
      if(V1[i].second==-1)
  	  { cout << "(" ; }
  	  else
  	  { cout << ")" ; }
    }
  }	
  return 0 ;	
} 