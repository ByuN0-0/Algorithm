#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char g){
  vector<string> res;
  istringstream str1(str);
  string buf;
  while(getline(str1,buf,g)){
    res.push_back(buf);
  }
  return res;
}

int solution(string str) {
  vector<string> s = split(str,' ');
  int answer=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=="Z"){
      answer-=stoi(s[i-1]);
    }
    else{
      answer+=stoi(s[i]);
    }
  }
  return answer;
}

int main(){
  cout << solution("1 2 Z 3");
}