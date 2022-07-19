#include <iostream>

using namespace std;
int main(){
  int x=0,y=0;
  int a,b;
  for(int i=0;i<3;i++){
      cin>>a>>b;
      x^=a;
      y^=b;
  }
  cout<<x<<" "<<y<<endl;
}