#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    int size;
    vector<int> info;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        info.push_back(temp);
    }
    vector<int> copy_info = info;
    sort(copy_info.begin(), copy_info.end());
    copy_info.erase(unique(copy_info.begin(), copy_info.end()), copy_info.end());
//    for (int i = 0; i < copy_info.size(); i++)
//        cout << copy_info[i] << endl;a
    for (int i = 0; i < info.size(); i++) {
        cout << lower_bound(copy_info.begin(), copy_info.end(), info[i]) - copy_info.begin()<< ' ';
    }
}