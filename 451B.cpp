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
  string s ; char c ;
  ll n,m,i,j,k,x=0,y=0,z=1 ;
  cin >> n ;
  ll A[n], B[n] ;
  for(i=0;i<n;i++)
  { cin >> A[i] ; B[i]=A[i] ; }
  sort(B, B+n) ;  
  for(i=0;i<n;i++)
  {
    if(A[i]==B[i])
    { x++ ; }  
  }
  for(i=0;i<n;i++)
  {
    if(A[n-1-i]==B[i])
    { y++ ; }  
  }
  if(x==n)
  { cout << "yes" << endl << 1 << " " << 1 << endl ; }
  else if(y==n)
  { cout << "yes" << endl << 1 << " " << n << endl ; }
  else  
  {
    ll a=-1,b=-1,c=-1,d=-1 ;
    for(i=0;i<n;i++)
    {
      if(A[i]==B[i])
      { 
        if(a==-1 && b==-1)
        { a=i ; }
        else if(d==-1 && b!=-1)
        { d=i ; }  
      }
      else
      {
        if(b==-1)
        { b=i ; }
        else
        { c=i ; }  
      }  
    }
    //cout << a << " " << b << " " << c << " " << d << endl ;
    for(i=0;i<=c-b;i++)
    {
      if(A[i+b]!=B[c-i])
      { z=0 ; break ; }  
    }
    if(z==1)
    { cout << "yes" << endl << b+1 << " " << c+1 << endl ; }
    else
    { cout << "no\n" ; } 
  }  
  return 0 ;	
}