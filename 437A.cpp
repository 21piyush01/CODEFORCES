#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  int n,m,i,j,k,x=0,y=0,z=0,l1,l2,l3,l4 ;
  string a,b,c,d ;
  cin >> a >> b >> c >> d ;
  l1 = a.size()-2 ;	
  l2 = b.size()-2 ;	
  l3 = c.size()-2 ;	
  l4 = d.size()-2 ;	
  vector <pair<int,int>> V ;
  V.push_back(make_pair(l1,1)) ;
  V.push_back(make_pair(l2,2)) ;
  V.push_back(make_pair(l3,3)) ;
  V.push_back(make_pair(l4,4)) ; 
  sort(V.begin(), V.end()) ;    
  if(V[0].first <= V[1].first/2)
  { x=V[0].second ; }	
  if(V[3].first >= V[2].first*2)
  { y=V[3].second ; }	
  if(x!=0 && y!=0)
  { z=3 ; }
  else if(x!=0 && y==0)
  { z=x ; }	
  else if(y!=0 && x==0)
  { z=y ; }
  else
  { z=3 ; }	
  if(z==1)
  { cout << "A\n" ; }
  else if(z==2)
  { cout << "B\n" ; }
  else if(z==3)
  { cout << "C\n" ; }
  else if(z==4)
  { cout << "D\n" ; }	
  return 0 ;	
} 