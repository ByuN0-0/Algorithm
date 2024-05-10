#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int hour, minute, second;
    int sec;
    cin >> hour >> minute >> second;
    cin >> sec;
    int h, m, s;
    h = sec/3600;
    m = sec%3600/60;
    s = sec%3600%60;

    hour += h;
    minute += m;
    second += s;

    if(second>=60){
      minute++;
      second %= 60;
    }
    if(minute>=60){
      hour++;
      minute %= 60;
    }
    if(hour>=24) hour %= 24;
    cout << hour << " " << minute << " " << second << "\n";
}