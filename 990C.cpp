#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n,i,j,k,x=0,y=0,ans=0,b=0 ;
  cin >> n ;
  std::vector<string> G(n);
  for(i=0;i<n;i++)
  { cin >> G[i] ; }
  for(i=0;i<n;i++)
  { 
    for(j=0;j<G[i].size();j++)
    { 
       if(G[i][j]==')') 
       { y++ ; }
       else if(G[i][j]=='(') 
       { x++ ; }
       if(x<y) 
       {
         x=0,y=0,b=1 ;	
       	 break ;
       }	 	 
    }
    if(b==1)
    { b=0 ; }
    else
    {
      for(k=0;k<n;k++)
      { 
        for(j=0;j<G[k].size();j++)
        {  
          if(G[k][j]==')') 
          { y++ ; }
          else if(G[k][j]=='(') 
          { x++ ; }
          if(x<y) 
          {
           x=0,y=0 ;	
       	   break ;
          }	 	 
        }
        if(x==y)
        { ans++ ; }	

      }  	
    
    }	

  }
  cout << ans ;  	
  
  return 0 ;	
} 