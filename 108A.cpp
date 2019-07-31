#include <bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> points;
#define MOD 1000000007
#define MAX 1000003

int main()
{
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;   
  long long int n,m,i,j,k,x,y,z=0 ;
  string s ;
  cin >> s ;
  n=s[0]-48, m=s[1]-48, x=s[3]-48, y=s[4]-48 ;
  if(n==0 && m==0)
  { cout << "01:10\n" ; }
  else if(n==0 && m==1 && x<=0)	
  { cout << "01:10\n" ; }
  else if(n==0 && m==1 && x>0)	
  { cout << "02:20\n" ; }
  else if(n==0 && m==2 && x<=1)	
  { cout << "02:20\n" ; }
  else if(n==0 && m==2 && x>1)	
  { cout << "03:30\n" ; }
  else if(n==0 && m==3 && x<=2)	
  { cout << "03:30\n" ; }
  else if(n==0 && m==3 && x>2)	
  { cout << "04:40\n" ; }
  else if(n==0 && m==3 && x<=2)	
  { cout << "03:30\n" ; }
  else if(n==0 && m==3 && x>2)	
  { cout << "04:40\n" ; }
  else if(n==0 && m==4 && x<=3)	
  { cout << "04:40\n" ; }
  else if(n==0 && m==4 && x>3)	
  { cout << "05:50\n" ; }
  else if(n==0 && m==5 && x<=4)	
  { cout << "05:50\n" ; }
  else if(n==0 && m==5 && x>4)	
  { cout << "10:01\n" ; }
  else if(n==0 && m>=6)	
  { cout << "10:01\n" ; }
  else if(n==1 && m==0 && x==0 && y==0)	
  { cout << "10:01\n" ; }
  else if(n==1 && m==0 && x==0 && y>0)	
  { cout << "11:11\n" ; }
  else if(n==1 && m==0 && x>0)	
  { cout << "11:11\n" ; }
  else if(n==1 && m==1 && x<=0)	
  { cout << "11:11\n" ; }
  else if(n==1 && m==1 && x==1 && y==0)	
  { cout << "11:11\n" ; }
  else if(n==1 && m==1 && x==1 && y>0)	
  { cout << "12:21\n" ; }
  else if(n==1 && m==1 && x>1)	
  { cout << "12:21\n" ; }
  else if(n==1 && m==2 && x<=1)	
  { cout << "12:21\n" ; }
  else if(n==1 && m==2 && x==2 && y==0)	
  { cout << "12:21\n" ; }
  else if(n==1 && m==2 && x==2 && y>0)	
  { cout << "13:31\n" ; }
  else if(n==1 && m==2 && x>2)	
  { cout << "13:31\n" ; }
  else if(n==1 && m==3 && x<=2)	
  { cout << "13:31\n" ; }
  else if(n==1 && m==3 && x==3 && y==0)	
  { cout << "13:31\n" ; }
  else if(n==1 && m==3 && x==3 && y>0)	
  { cout << "14:41\n" ; }
  else if(n==1 && m==3 && x>3)	
  { cout << "14:41\n" ; }
  else if(n==1 && m==4 && x<=3)	
  { cout << "14:41\n" ; }
  else if(n==1 && m==4 && x==4 && y==0)	
  { cout << "14:41\n" ; }
  else if(n==1 && m==4 && x==4 && y>0)	
  { cout << "15:51\n" ; }
  else if(n==1 && m==4 && x>4)	
  { cout << "15:51\n" ; }
  else if(n==1 && m==5 && x<=4)	
  { cout << "15:51\n" ; }
  else if(n==1 && m==5 && x==5 && y==0)	
  { cout << "15:51\n" ; }
  else if(n==1 && m==5 && x==5 && y>0)	
  { cout << "20:02\n" ; }
  else if(n==1 && m>=6)	
  { cout << "20:02\n" ; }
  else if(n==2 && m==0 && x==0 && y<=1)	
  { cout << "20:02\n" ; }
  else if(n==2 && m==0 && x==0 && y>1)	
  { cout << "21:12\n" ; }
  else if(n==2 && m==0 && x>=1)	
  { cout << "21:12\n" ; }
  else if(n==2 && m==1 && x<=0)	
  { cout << "21:12\n" ; }
  else if(n==2 && m==1 && x==1 && y<=1)	
  { cout << "21:12\n" ; }
  else if(n==2 && m==1 && x==1 && y>1)	
  { cout << "22:22\n" ; }
  else if(n==2 && m==1 && x>1)	
  { cout << "22:22\n" ; }
  else if(n==2 && m==2 && x<=1)	
  { cout << "22:22\n" ; }
  else if(n==2 && m==2 && x==2 && y<=1)	
  { cout << "22:22\n" ; }
  else if(n==2 && m==2 && x==2 && y>1)	
  { cout << "23:32\n" ; }
  else if(n==2 && m==2 && x>2)	
  { cout << "23:32\n" ; }
  else if(n==2 && m==3 && x<=2)	
  { cout << "23:32\n" ; }
  else if(n==2 && m==3 && x==3 && y<=1)	
  { cout << "23:32\n" ; }
  else if(n==2 && m==3 && x==3 && y>1)	
  { cout << "00:00\n" ; }
  else if(n==2 && m==3 && x>3)	
  { cout << "00:00\n" ; }
  return 0 ;	
}