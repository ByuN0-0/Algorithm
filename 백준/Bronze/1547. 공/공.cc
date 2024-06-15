#include <iostream>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int m;
  int cup[3];
  cin >> m;
  cup[0]=1;
  cup[1]=0;
  cup[2]=0;
  for(int i=0;i<m;i++){
    int x,y;
    cin >> x >> y;
    swap(cup[x-1],cup[y-1]);
  }
  for(int i=0;i<3;i++){
    if (cup[i]) cout << i+1;
  }
}