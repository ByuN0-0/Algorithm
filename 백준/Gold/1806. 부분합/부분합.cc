#include <iostream>
#include <algorithm>
using namespace std;


int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int arr[100001];
  int N, S;
  cin >> N >> S;
  for(int i=0;i<N;i++){
    cin >> arr[i];
  }

  int len = N+1;
  int low = 0;
  int high = 0;
  int sum = arr[0];
  while(low<=high && high < N){
    if(sum<S){
      sum += arr[++high];
    }
    else{
      len = min(len, high-low+1);
      sum -= arr[low++];
    }
  }
  if(len == N+1) len = 0;
  cout << len << "\n";
  return 0;
}