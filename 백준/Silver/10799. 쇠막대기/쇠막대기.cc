#include <iostream>
#include <stack>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); //고정
  cin.tie(0); //고정
  cout.tie(0); //고정
  ////////////////////////
  string line;
  stack<char> st;
  int ans=0;
  cin >> line;
  for(int i=0; i<line.length();i++){
    if (line[i]=='('){
      st.push('(');
    }
    else{
      if(line[i-1]=='('){ //레이저
        st.pop();
        ans += st.size();
      }
      else{
        st.pop();
        ans++;
      }
    }
  }
  cout << ans << "\n";
}