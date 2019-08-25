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
  int n, a, count1(0), extra0(0), extra0max(-1) ;
  cin >> n ;
  while(n--)
  {
    cin >> a ;
    if(a==1)
    {
      count1+=1 ;
      if(extra0>0)
      { extra0-=1 ; }
    }
    else
    {
      extra0+=1 ;
      if(extra0>extra0max)
      { extra0max = extra0 ; }
    }
  }
  cout << count1+extra0max << endl ;
  return 0 ;	
}