#include <iostream>
using namespace std;

int main(){
  int T;
  cin>>T;
  int x1,x2,y1,y2;
  int cx,cy,r;
  int c;
  int cnt=0;
  for(int i=0;i<T;i++){
    cin>>x1>>y1>>x2>>y2;
    cin>>c;
    cnt = 0;
    for(int j=0;j<c;j++){
      cin>>cx>>cy>>r;
      if ((((cx-x1)*(cx-x1))+((cy-y1)*(cy-y1))<r*r) && (((cx-x2)*(cx-x2))+((cy-y2)*(cy-y2))<r*r)){
        continue;
      }
      if (((cx-x1)*(cx-x1))+((cy-y1)*(cy-y1))<r*r){
        cnt++;
      }
      if (((cx-x2)*(cx-x2))+((cy-y2)*(cy-y2))<r*r){
        cnt++;
      }
    }
    cout<<cnt<<endl;
  }
}