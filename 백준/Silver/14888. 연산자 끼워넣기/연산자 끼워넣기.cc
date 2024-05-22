#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];
int op[4];
int N;
int mini = 1000000001;
int maxi = -1000000001;

void func(int val, int degree){
  if(degree == N){
    if(mini>val) mini = val;
    if(maxi<val) maxi = val;
    return;
  }

  for(int i=0;i<4;i++){
    if(op[i]>0){
      op[i]--;
      if(i==0) func(val+arr[degree], degree+1);
      else if(i==1) func(val-arr[degree], degree+1);
      else if(i==2) func(val*arr[degree], degree+1);
      else if(i==3) func(val/arr[degree], degree+1);
      op[i]++;
    }
  }
}

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  cin >> N;
  for(int i=0;i<N;i++) cin >> arr[i];
  for(int i=0;i<4;i++) cin >> op[i];
  func(arr[0],1);
  cout << maxi << "\n";
  cout << mini << "\n";
}