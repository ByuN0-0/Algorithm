#include <iostream>
using namespace std;

int main(){
  int T;
  int x1,y1,r1,x2,y2,r2;
  int d;
  int add,sub;
  cin>>T;
  for(int i=0;i<T;i++){
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    add = (r1+r2)*(r1+r2);
    sub = (r1-r2)*(r1-r2);
    if(sub<d&&d<add){
      cout<<"2"<<endl;
    }
    else if((d==add || d==sub) && d!=0){
      cout<<"1"<<endl;
    }
    else if(d<sub || d>add){
      cout<<"0"<<endl;
    }
    else if(d==0){
      if(r1==r2){
        cout<<"-1"<<endl;
      }
      else if(r1!=r2){
        cout<<"0"<<endl;
      }
    }
  }
}