#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

vector<int> adj[100005] ;
bool visited[100005] ; 

int minKey(int n, int key[], int mstSet[])
{
  int min=INT_MAX, min_index, i ;
  for(i=0;i<n;i++)
  {
    if(key[i]<min && mstSet[i]==0)
    { min=key[i] ; min_index=i ; }  
  }
  return min_index ;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,j,n,m,a,b,c ;
  cin >> n >> m ;
  for(i=0;i<m;i++)
  {
  	cin >> a >> b >> c ;
    c ;
  }
  int u,v,key[n], parent[n], mstSet[n] ;
  for(i=0;i<n;i++)
  { key[i]=INT_MAX ; mstSet[i]=0 ; parent[i]=-1 ; }
  key[0]=0, parent[0]=-1 ;
  for(i=0;i<n-1;i++)
  {
    u = minKey(n,key,mstSet) ;
    mstSet[u] = 1 ;
    for(v=0;v<n;v++)
    {
      if(G[u][v]>0 && mstSet[v]==0 && key[u]+G[u][v]<key[v])
      { parent[v]=u ; key[v]=G[u][v]+key[u] ; }  
    } 
  }
  queue<int> Q ;
  j=n-1 ;
  while(parent[j]!=-1)
  {
    Q.push(j) ;
    j = parent[j] ;
  }	
  if(j!=0)
  { cout << -1 ; }
  else
  {
  	cout << 1 << " " ;
  	int z = Q.size() ;
  	int A[z] ;
  	for(i=0;i<z;i++)
  	{ A[i]=Q.front() ; Q.pop() ; }
  	for(i=z-1;i>=0;i--)
  	{ cout << A[i]+1 << " " ; }	
  }	
  return 0 ;	
} 