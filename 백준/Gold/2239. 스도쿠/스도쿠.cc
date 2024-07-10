#include <iostream>
#include <vector>
#include <string>
using namespace std;

int puzzle[9][9];
vector<pair<int, int>> space;

bool isAvailable(int x, int y, int k){
  for(int i=0;i<9;i++){
    if(puzzle[x][i] == k) return false;
    if(puzzle[i][y] == k) return false;
  }
  for(int i=x/3*3; i<x/3*3+3; i++){
    for(int j=y/3*3; j<y/3*3+3; j++){
      if(puzzle[i][j] == k) return false;
    }
  }
  return true;
}

void print_puzzle(){
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cout << puzzle[i][j];
    }
    cout << "\n";
  }
}

void dfs(int space_index){
  if (space_index == space.size()) {
    print_puzzle();
    exit(0);
  }
  //cout<<"----------------\n";
  //print_puzzle();
  int x = space[space_index].first;
  int y = space[space_index].second;
  for(int i=1;i<=9;i++){
    if(isAvailable(x, y, i)){
      puzzle[x][y] = i;
      dfs(space_index+1);
      puzzle[x][y] = 0;
    }
  }
}

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  for(int i=0;i<9;i++){
    string a;
    cin >> a;
    for(int j=0;j<9;j++){
      puzzle[i][j] = a[j] - '0';
      if(puzzle[i][j] == 0) space.push_back({i, j});
    }
  }
  dfs(0);
  print_puzzle();
}