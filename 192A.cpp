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

int const N = 1e5 + 1 ;
long long arr[N] ;

int main() 
{
  int n ;
  cin >> n ; 
  arr[0] = 0 ;
  for(int i=1;i<N;i++)
  { arr[i] = arr[i-1]+i ; }
  for(int i=1;i<N;i++)
  {
    if(binary_search(arr+1, arr+N, n-arr[i])) 
    {
      cout << "YES" << endl ;
      return 0 ;
    }
  }      
  cout << "NO" << endl;  
  return 0 ;
}