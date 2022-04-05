#include <iostream>
#include <string>
#include <deque>

using namespace std;

string deque_to_string(deque<int> input, bool check) {
    string value = "[";
    if (input.empty()) {
        value += "]";
        return value;
    } else {
        if (!check) {
            for (int i = 0; i < input.size() - 1; i++) {
                string temp = to_string(input[i]);
                value = value + temp + ",";
            }
            value = value + to_string(input[input.size() - 1]) + "]";
            return value;
        } else {
            for (int i = input.size() - 1; i > 0; i--) {
                string temp = to_string(input[i]);
                value = value + temp + ",";
            }
            value = value + to_string(input[0]) + "]";
            return value;
        }
    }
}

deque<int> string_to_deque(string raw) {
    string temp = "";
    deque<int> info;
    for (int i = 1; i < raw.size(); i++) {
        if (raw[i] == ',') {
            info.push_back(stoi(temp));
            temp.clear();
        } else if (raw[i] == ']') {
            info.push_back(stoi(temp));
            temp.clear();
            return info;
        } else
            temp += raw[i];
    }
}

int main(void) {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        bool reverse_check = false;
        bool error_check = false;
        string order, raw_data;
        int size;
        cin >> order >> size >> raw_data;
        deque<int> real_data;
        if (size > 0)
            real_data = string_to_deque(raw_data);

        for (int i = 0; i < order.size(); i++) {
            if (order[i] == 'R')
                reverse_check = !reverse_check;
            else if (order[i] == 'D') {
                if (real_data.empty()) {
                    cout << "error\n";
                    error_check = true;
                    break;
                } else {
                    error_check = false;
                    if (!reverse_check)
                        real_data.pop_front();
                    else
                        real_data.pop_back();
                }
            }
        }
        if (!error_check) {
            cout << "[";
            for (int a = 0; a < real_data.size(); a++) {
                if (!reverse_check) {
                    cout << real_data[a];
                    if (a < real_data.size() - 1)
                        cout << ",";
                } else {
                    cout << real_data[real_data.size() - a - 1];
                    if (a < real_data.size() - 1)
                        cout << ",";
                }
            }
            cout<<"]\n";
        }
    }
}