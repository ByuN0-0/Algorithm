#include <iostream>
#include <algorithm>
using namespace std;

struct Line{
  int start, end;
};

Line arr[1000001];
int N;

bool compare(Line a, Line b){
  if(a.start == b.start){
    return a.end < b.end;
  }
  return a.start < b.start;
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> arr[i].start >> arr[i].end;
  }
  sort(arr, arr+N, compare);

  int answer = 0;
  int mini = arr[0].start;
  int maxi = arr[0].end;
  for(int i=0; i<N; i++){
    if(arr[i].start<=maxi){
      maxi = max(maxi, arr[i].end);
    }
    else{
      answer += maxi - mini;
      mini = arr[i].start;
      maxi = arr[i].end;
    }
  }
  answer += maxi - mini;
  cout << answer ;
}