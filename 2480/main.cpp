#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int solution(int first, int second, int third) {
    int answer = 0;
    // check the same
    if ((first == second) && (second == third) && (first == third)) {
        answer = 10000 + first * 1000;
        return answer;
    } else if ((first == second) || (first == third)) {
        answer = 1000 + 100 * first;
        return answer;
    } else if (second == third) {
        answer = 1000 + 100 * second;
        return answer;
    }
    deque<int> info;
    info.push_back(first);
    info.push_back(second);
    info.push_back(third);
    sort(info.begin(), info.end());
    answer = 100 * info[2];
    return answer;
}

int main(void) {
    cin.sync_with_stdio(false);
    int first, second, third;
    cin >> first >> second >> third;
    cout<<solution(first, second, third);
}