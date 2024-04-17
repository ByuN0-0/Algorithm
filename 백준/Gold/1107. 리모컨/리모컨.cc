#include <iostream>
#include <string>
#include <vector>
#define MIN(a,b) (a<b?a:b)

using namespace std;

bool disabled[10] = {true,true,true,true,true,true,true,true,true,true};
int min_num = 500001;
int N, M;

void find(string num){
  for(int i=0;i<10;i++){
    if(disabled[i]){
      string temp = num+to_string(i);
      min_num = MIN(min_num, abs(N-stoi(temp))+temp.length());
      if(temp.length()<6) find(temp); // 6자리 넘어갈경우 search x
    }
  }
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////
  cin >> N;
  cin >> M;
  string strN = to_string(N);
  for(int i=0;i<M;i++){
    int temp;
    cin >> temp;
    disabled[temp] = false;
  }
  if(N==100){
    cout << 0 << "\n";
    return 0;
  }
  //여기서부터 하면됨
  min_num = MIN(min_num, abs(100-N));
  find("");
  cout << min_num << "\n";

}