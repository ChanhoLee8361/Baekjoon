#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    deque<int> answer;
    answer.push_back(x);
    answer.push_back(w - x);
    answer.push_back(y);
    answer.push_back(h - y);
    sort(answer.begin(), answer.end());
    cout << answer.front() << endl;
}