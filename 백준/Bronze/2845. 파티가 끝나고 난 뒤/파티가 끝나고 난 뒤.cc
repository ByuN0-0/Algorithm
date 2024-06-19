#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n, m;
  cin >> n >> m;
  int p = n*m;
  for(int i=0;i<5;i++){
    int temp;
    cin >> temp;
    cout << temp-p << " ";
  }
}