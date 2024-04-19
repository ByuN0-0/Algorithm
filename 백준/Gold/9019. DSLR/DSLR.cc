#include <iostream>
#include <string>
#include <queue>

using namespace std;

string bfs(int a, int b){
  queue<pair<int,string>> q;
  bool visited[10000] = {false};
  q.push({a,""});
  visited[a]=true;
  while (!q.empty()){
    int n = q.front().first;
    string str = q.front().second;
    q.pop();
    if(n==b) return str;


    int dn = (2 * n) % 10000;
    if(!visited[dn]){
      q.push({dn,str+"D"});
      visited[dn]=true;
    }

    int sn = (n == 0 ? 9999 : n - 1);
    if(!visited[sn]){
      q.push({sn,str+"S"});
      visited[sn]=true;
    }

    int ln = (n % 1000) * 10 + n / 1000;
    if(!visited[ln]){
      q.push({ln,str+"L"});
      visited[ln]=true;
    }

    int rn = (n % 10) * 1000 + n / 10;
    if(!visited[rn]){
      q.push({rn,str+"R"});
      visited[rn]=true;
    }
  }
}


int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////
  int T;
  cin >> T;
  for(int i=0;i<T;i++){
    int A,B;
    cin >> A >> B;
    cout << bfs(A,B) << "\n";
  }
}