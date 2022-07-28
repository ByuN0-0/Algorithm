#include <iostream>
#include <map>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  map<string,string> arr;
  for(int i=0;i<n;i++){
    string a,b;
    cin>>a>>b;
    arr[a]=b;
  }
  for(int i=0;i<m;i++){
    string a;
    cin >> a;
    cout<<arr[a]<<'\n';
  }
  return 0;
}