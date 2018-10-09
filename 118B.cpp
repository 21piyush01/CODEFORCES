#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,i,j,k,a,b,c,l ;
  cin >> n ;
  l = 2*k ;
  for(i=0;i<=n;i++)
  {
  	for(j=n-i;j>0;j--)
    { cout << "  " ; }
    if(i==0)
    {	
      cout << 0 ; 	
    } 
    else
    { 
      for(k=0;k<=i;k++)
      { cout << k << " " ; }
    }
    for(k=i-1;k>=0;k--)
    { 
       if(k==0)
       { cout << 0 ; }
       else	
       { cout << k << " " ; } 
    }
    cout << endl ;	
  }
  for(i=n-1;i>=0;i--)
  {
    for(j=n-i;j>0;j--)
    { cout << "  " ; }
    if(i==0)
    {	
      cout << 0 ; 	
    } 
    else
    { 
      for(k=0;k<=i;k++)
      { cout << k << " " ; }
    }
    for(k=i-1;k>=0;k--)
    { 
       if(k==0)
       { cout << 0 ; }
       else	
       { cout << k << " " ; } 
    }
    cout << endl ;
  }	
  return 0 ;	
} 