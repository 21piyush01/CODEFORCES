#include <bits/stdc++.h>
using namespace std ;

#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MOD 1000000007
#define MAX 1000003

typedef long long int ll ;
typedef pair<int, int> ii ;
vector<int> points ;
vector<ii> v ;

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  cin >> n ;
  //cout << n << "@\n" ; 
  for(i=0;i<n;i++)
  {
    string s ; char c ;
    cin >> s ;
    y=s.size(), x=0 ; 
    if(s[0]>=48 && s[0]<=57)
    {
      for(j=y-1;j>=0;j--)
      { x += (s[j]-48)*pow(10,y-1-j) ; }
      //cout << "   @  " << x << endl ;
      if(x<18)
      { z++ ; }  
    }
    else
    {
      if(s=="ABSINTH" || s=="BEER" || s=="BRANDY" || s=="CHAMPAGNE" || s=="GIN" || s=="RUM" ||
         s=="SAKE" || s=="TEQUILA" || s=="VODKA" || s=="WHISKEY" || s=="WINE")
      { z++ ; }
    }  
  }
  cout << z << endl ;
  return 0 ;	
} 