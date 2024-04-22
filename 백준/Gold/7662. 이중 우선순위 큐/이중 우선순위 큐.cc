#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int main(void){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////
  int T;
  cin >> T;
  while(T--){
    int k;
    cin >> k;
    priority_queue<int> pq_max;
    priority_queue<int, vector<int>, greater<int>> pq_min;
    map<int,int> cnt; //값 : 개수
    while(k--){
      char op;
      int n;
      int v;
      cin >> op >> n;
      if(op=='I'){
        pq_max.push(n);
        pq_min.push(n);
        cnt[n]++;
      }
      else{
        if(n==1&&!pq_max.empty()){
          cnt[pq_max.top()]--;
        }
        else if(n==-1&&!pq_min.empty()){
          cnt[pq_min.top()]--;
        }
        while(!pq_max.empty()&&cnt[pq_max.top()]==0) {pq_max.pop();}
        while(!pq_min.empty()&&cnt[pq_min.top()]==0) {pq_min.pop();}
      }
    }
    while(!pq_max.empty()&&cnt[pq_max.top()]==0) pq_max.pop();
    while(!pq_min.empty()&&cnt[pq_min.top()]==0) pq_min.pop();

    if(pq_max.empty()||pq_min.empty()){
      cout << "EMPTY" << "\n";
    }
    else{
      cout << pq_max.top() << " " << pq_min.top() << "\n";
    }
  }
  return 0;
}