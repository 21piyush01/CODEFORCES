#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,m,i,j,k,z=0 ;
  cin >> n >> m ;
  z = n<m ? n : m ;
  if(z%2==1)
  { cout << "Akshat\n" ; }	
  else
  { cout << "Malvika\n" ; } 
  return 0 ;	
} 