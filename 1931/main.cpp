#include <iostream>
#include <deque>
#include <algorithm>
#include <iomanip>

using namespace std;
#define MAX 100001

deque<pair<int, int>> info;

int main(void) {
    cin.tie(NULL);
    int size, first, second, answer = 1;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> first >> second;
        info.push_back(make_pair(second, first));
    }
    sort(info.begin(), info.end());
    first = info[0].first;
    for (int i = 1; i < size; i++) {
        if (first <= info[i].second) {
            answer++;
            first = info[i].first;
        }
    }
    cout << answer << endl;
}