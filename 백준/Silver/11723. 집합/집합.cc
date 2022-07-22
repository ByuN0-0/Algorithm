#include <iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int m;
  int S=0;
  int num;
  string com;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>com;
    if(!com.compare("add")){
      cin>>num;
      S |= (1<<num);
    }
    else if(!com.compare("remove")){
      cin>>num;
      S &= ~(1<<num);
    }
    else if(!com.compare("check")){
      cin>>num;
      if(S&(1<<num)){
        cout<<1<<"\n";
      }
      else{
        cout<<0<<"\n";
      }
    }
    else if(!com.compare("toggle")){
      cin>>num;
      if (S&(1<<num)){
        S &=~(1<<num);
      }
      else{
        S|=(1<<num);
      }
    }
    else if(!com.compare("all")){
      S=(1<<21)-1;
    }
    else if(!com.compare("empty")){
      S=0;
    }
  }
  return 0;
}