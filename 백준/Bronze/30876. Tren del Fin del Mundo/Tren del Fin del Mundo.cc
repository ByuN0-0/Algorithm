#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int lowestX = 1001;
  int lowestY = 1001;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int tempX, tempY;
    cin >> tempX >> tempY;
    if(tempY<lowestY){
      lowestY = tempY;
      lowestX = tempX;
    }
  }
  cout << lowestX << " " << lowestY << "\n";
}