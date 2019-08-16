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

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x=0,y=0,z=0 ;
  string s ; char c ;
  int A[3] ;
  for(i=0;i<3;i++)
  { 
    cin >> s ;
    if(s=="C")
    { A[i]=0 ; }
    else if(s=="C#") 
    { A[i]=1 ; }  
    else if(s=="D")
    { A[i]=2 ; } 
    else if(s=="D#")
    { A[i]=3 ; }
    else if(s=="E")
    { A[i]=4 ; }
    else if(s=="F")
    { A[i]=5 ; }
    else if(s=="F#")
    { A[i]=6 ; } 
    else if(s=="G")
    { A[i]=7 ; }
    else if(s=="G#")
    { A[i]=8 ; }
    else if(s=="A")
    { A[i]=9 ; }
    else if(s=="B")
    { A[i]=10 ; }
    else if(s=="H")
    { A[i]=11 ; }  
  }
  sort(A, A+3) ;
  if(A[1]-A[0]==4 && A[2]-A[1]==3)
  { cout << "major\n" ; }  
  else if(A[2]-A[1]==4 && 12+A[0]-A[2]==3)
  { cout << "major\n" ; }  
  else if(12+A[0]-A[2]==4 && A[1]-A[0]==3)
  { cout << "major\n" ; }  
/*  
  else if(A[1]-A[0]==-8 && A[2]-A[1]==3)
  { cout << "major\n" ; }
  else if(A[1]-A[0]==-5 && A[2]-A[1]==4)
  { cout << "major\n" ; }
*/    
  else if(A[1]-A[0]==3 && A[2]-A[1]==4)
  { cout << "minor\n" ; }
  else if(A[2]-A[1]==3 && 12+A[0]-A[2]==4)
  { cout << "minor\n" ; }  
  else if(12+A[0]-A[2]==3 && A[1]-A[0]==4)
  { cout << "minor\n" ; }  
/*
  else if(A[0]-A[2]==-9 && A[1]-A[0]==4)
  { cout << "minor\n" ; }
  else if(A[1]-A[0]==-5 && A[2]-A[1]==3)
  { cout << "minor\n" ; }
*/
  else
  { cout << "strange\n" ; }  
  return 0 ;	
}