#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    int N, M;
    cin >> N >> M;

    deque<int> info;
    deque<int> answer;
    for (int i = 1; i <= N; i++)
        info.push_back(i);

    int cnt = 0;
    while (!info.empty()) {
        cnt++;
        int front = info.front();
        info.pop_front();
        if (cnt % M != 0) {
            info.push_back(front);
        } else
            answer.push_back(front);
    }
    cout<<"<";
    while(!answer.empty()){
        cout<<answer.front();
        if(answer.size() > 1)
        {
            cout<<", ";
        }
        answer.pop_front();
    }
    cout<<">";
}