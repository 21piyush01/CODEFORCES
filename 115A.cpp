#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 2000
int G[V][V] ;

void DFSUtil(int G[V][V], int n, int visited[], int u)
{
  int i,v ;
  for(v=0;v<n;v++)
  {
    if(G[u][v]==1 && visited[v]==0)
    { 
      visited[v] = visited[u]+1 ;
      DFSUtil(G,n,visited,v) ; 
    }  
  }
}

void DFS(int G[V][V], int n, int p[])
{
  int max=0,i,j,visited[n]={0} ;
  for(i=0;i<n;i++)
  {
    if(p[i]==-1 && visited[i]==0)
    { 
      visited[i] = 1 ;
      DFSUtil(G,n,visited,i) ; 
    }	
  }
  for(i=0;i<n;i++)
  {
  	if(visited[i]>max)
  	{ max=visited[i] ; }	
  }
  cout << max ;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,j,n ;
  cin >> n ;
  int p[n] ;
  for(i=0;i<n;i++)
  { 
    cin >> p[i] ;
    if(p[i]!=-1)
    { G[p[i]-1][i] = 1 ; }
  } 
  DFS(G,n,p) ;
  return 0 ;	
} 