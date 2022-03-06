#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
deque<int> info;

int solution(int goal) {
    int answer = 0;
    int gap = 9999999;
    for (int i = 0; i < info.size(); i++) {
        for (int j = i + 1; j < info.size(); j++) {
            for (int k = j + 1; k < info.size(); k++) {
                int check = info[i] + info[j] + info[k];
                int diff = abs(check - goal);
                if (check == goal) {
                    return check;
                }
                else if(check < goal)
                {
                    if(diff < gap)
                        gap = diff;
                }
                else
                    continue;
            }
        }
    }
    return goal - gap;
}

int main(void) {
    cin.sync_with_stdio(false);
    int size, goal;
    cin >> size >> goal;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        info.push_back(temp);
    }
    sort(info.begin(), info.end());
    cout << solution(goal);
}