#include <iostream>
#include <string>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    string info;
    string num = "";
    cin >> info;
    bool minus = false;
    int answer = 0;
    int result = 0;
    for (int i = 0; i <= info.size(); i++) {
        if ((info[i] == '-') || (info[i] == '+') || (i == info.size())) {
            result = stoi(num);
            num.clear();
            if (minus) { answer -= result; }
            else {
                answer += result;
            }
            if (info[i] == '-')
                minus = true;


        } else {
            num += info[i];
        }
    }
    cout << answer << endl;
}