#include <iostream>
#include <vector>
using namespace std;

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int N;
  int card[1000005] = {0};
  int scores[1000005] = {0};
  cin >> N;
  vector<int> v;
  for(int i=0;i<N;i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
    card[temp] = 1;
  }
  for(int i=0; i<N; i++){
    for(int j=v[i]*2;j<1000001;j+=v[i]){
      if (card[j]==1){
        scores[v[i]]++;
        scores[j]--;
      }
    }
  }
  for(int i=0; i<N; i++){
    cout << scores[v[i]] << " ";
  }
  return 0;
}