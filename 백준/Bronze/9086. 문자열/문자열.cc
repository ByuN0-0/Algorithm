#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        string s;
        cin >> s;
        cout << s[0] << s[s.size()-1] << "\n";
    }
}