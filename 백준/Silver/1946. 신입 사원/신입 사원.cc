#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0); //고정
  cin.tie(0); //고정
  cout.tie(0); //고정
  ////////////////////////
  int T;
  cin >> T;
  for(int i=0;i<T;i++){
    int N;
    vector<pair<int,int>> v;
    cin >> N;
    for(int j=0;j<N;j++){
      int x, y;
      cin >> x >> y;
      v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int temp = 0;
    int ans = 1;
    for(int j=1;j<N;j++){
      if (v[temp].second>v[j].second){
        ans++;
        temp=j;
      }
    }
    cout << ans << "\n";
  }
}