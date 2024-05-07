#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i=n;i>0;i--){
        s="";
        for(int j=0;j<i;j++){
            s+="*";
        }
        cout << s << endl;
    }
}