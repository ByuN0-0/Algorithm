#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  while(true){
    int n, m;
    cin >> n >> m;
    if(n==0 && m==0) break;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
      int temp;
      cin >> temp;
      a.push_back(temp);
    }
    for(int i=0;i<m;i++){
      int temp;
      cin >> temp;
      b.push_back(temp);
    }
    int ptr1=0;
    int ptr2=0;
    int cnt=0;
    while(ptr1<n && ptr2<m){
      if(a[ptr1]<b[ptr2]){
        ptr1++;
      }
      else if(a[ptr1]>b[ptr2]){
        ptr2++;
      }
      else{
        cnt++;
        ptr1++;
        ptr2++;
      }
    }
    cout << cnt << "\n";
  }
}