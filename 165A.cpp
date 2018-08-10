#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int arr[201][2],i,j,n ;
  cin >> n ;
  for(i=0;i<n;i++)
  {
	for(j=0;j<2;j++)
	{ cin >> arr[i][j] ; }
  }
  int count=0;
  for(i=0;i<n;i++)
  {
    int x=arr[i][0],left=0,right=0,up=0,below=0,y=arr[i][1] ;
    for(j=0;j<n;j++)
	{
      if(x<arr[j][0] && y==arr[j][1])
      { right++ ;  }
      else if(x>arr[j][0] && y==arr[j][1])
      { left++ ; }
      else if(x==arr[j][0] && y<arr[j][1])
      { up++ ; }
      else if(x==arr[j][0] && y>arr[j][1])
      { below++ ; }
	  if(right>0 && left>0 && up>0 && below>0)
	  {
	    //if((left+right+up+below)>=4)
	    /*{*/ count++ ; break ; /*}*/
	  }
	}
  }
  cout << count ;
  return 0 ;
}