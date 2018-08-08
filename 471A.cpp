#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int A[6],i,z=1,a,s=1,t=0 ;
  for(i=0;i<6;i++)
  { cin >> A[i] ; }
  sort(A, A+6) ;
  for(i=1;i<6;i++)
  {
  	if(A[i]!=A[i-1])
  	{ z++ ; a=i+1 ; }	
  }  	
  if(z==1)
  { cout << "Elephant" ; }
  else if(z==2)
  {
  	if(a==2 || a==6)
    { cout << "Bear" ; }
	else if(a==3 || a==5)
	{ cout << "Elephant" ; }
    else
    { cout << "Alien" ; } 		
  }
  else if(z==3)
  { 
  	for(i=1;i<6;i++)
  	{
  		if(A[i]==A[i-1])
  		{ 
  			s++ ; 
  			if(s==4)
  			{ cout << "Bear" ; t=1 ; break ;  } 
  		}
  		else 
  		{ s=1 ; }	
  	}  	
    if(t==0)
  	{ cout << "Alien" ; } 	 
  }
  else
  { cout << "Alien" ; } 	
  return 0 ;	
} 