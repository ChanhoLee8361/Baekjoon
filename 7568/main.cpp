#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

int main(void) {
    cin.sync_with_stdio(false);
    deque<pair<int, int>> info;
    int people;
    cin >> people;
    for (int i = 0; i < people; i++) {
        int first, second;
        cin >> first >> second;
        info.push_back(make_pair(first, second));
    }
    int value = 1;
    for (int i = 0; i < info.size(); i++) {
        value = 1;
        for (int j = 0; j < info.size(); j++) {
            if (i == j)
                continue;
            else if ((info[i].first < info[j].first) && (info[i].second < info[j].second))
                value++;
        }
        cout << value << ' ';
    }
}