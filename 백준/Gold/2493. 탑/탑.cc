#include <iostream>
#include <stack>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); //고정
  cin.tie(0); //고정
  cout.tie(0); //고정
  ////////////////////////
  int N;
  stack<pair<int,int>> st;
  cin >> N;

  for(int i=1;i<N+1;i++){
    int x;
    cin >> x;
    while (!st.empty()){
      if(x<st.top().second){
        cout << st.top().first << " ";
        break;
      }
      st.pop();
    }
    if(st.empty()){
      cout<< 0 << " ";
    }
    st.push({i,x});
  }
}