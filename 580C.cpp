#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

vector<int> adj[100005] ;
bool visited[100005] ; 
bool cats[100005] ;

void BFS(int m, int s, int k)
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    vector<int>::iterator i;
    while(!q.empty())
    {
        s = q.front();
        //cout << s << " ";
        q.pop();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i] && cats[*i]+k<m)
            {
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,j,n,m,temp,a,b,k=0,count=0 ;
  cin >> n >> m ;
  for(i=0;i<n;i++)
  { 
    visited[i] = false ;
    cin >> temp ;
    if(temp==1)
    { cats[i] = true ; }
    else
    { cats[i] = false ; }	
  }	
  cats[0] = false ;
  for(i=0;i<n-1;i++)
  {
    cin >> a >> b ;
    adj[a-1].push_back(b-1) ;
  }	
  BFS(m,0,k) ;
  for(i=1;i<n;i++)
  { 
    if(visited[i]) 
    { count++ ; }	
  }
  cout << count ;

  return 0 ;	
} 