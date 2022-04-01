#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    deque<int> answer;
    int x1, y1, r1, x2, y2, r2;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double between = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
        if (between == 0) {
            if (r1 == r2) {
                answer.push_back(-1);
                continue;
            } else {
                answer.push_back(0);
                continue;
            }
        } else {
            if ((between < (r1 + r2)) && (between > abs(r1 - r2)))
                answer.push_back(2);
            else if ((between == (r1 + r2)) || (between == abs(r1 - r2)))
                answer.push_back(1);
                    else
                answer.push_back(0);
        }
    }
    while (!answer.empty()) {
        cout << answer.front() << endl;
        answer.pop_front();
    }

}