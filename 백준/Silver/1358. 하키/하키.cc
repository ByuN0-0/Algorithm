#include <iostream>
using namespace std;

int main(){
  int W,H,X,Y,P;
  int x,y;
  int cnt=0;
  cin>>W>>H>>X>>Y>>P;
  for(int i=0;i<P;i++){
    cin>>x>>y;
    
    if(x>=X && x<=X+W && y>=Y && y<=Y+H){
      cnt++;
    }
    else if(((X-x)*(X-x)+(y-(Y+H/2))*(y-(Y+H/2)))<=(H/2)*(H/2)){
      cnt++;
    }
    else if(((X+W-x)*(X+W-x)+(y-(Y+H/2))*(y-(Y+H/2)))<=(H/2)*(H/2)){
      cnt++;
    }
  }
  cout<<cnt<<endl;
}