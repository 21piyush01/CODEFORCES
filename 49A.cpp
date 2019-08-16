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
  long long int n,m,i,j,k,x=0,y=0,z=-1 ;
  string s ; char c ;
  getline(cin, s) ;
  n = s.size() ;
  for(i=n-1;i>=0;i--)
  {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || 
       s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
    { z=1 ; break ; }
    else if(s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='f' || s[i]=='g' || s[i]=='h' || 
            s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='p' || 
            s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='v' || s[i]=='w' || 
            s[i]=='x' || s[i]=='z' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='F' || 
            s[i]=='G' || s[i]=='H' || s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || 
            s[i]=='N' || s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='T' || 
            s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Z')
    {  z=0 ; break ; }  
  } 
  if(z==0)
  { cout << "NO\n" ; }
  else if(z==1)
  { cout << "YES\n" ; }  
  return 0 ;	
}