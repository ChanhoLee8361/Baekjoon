#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    int people;
    deque<int> cost;
    cin >> people;
    for (int i = 0; i < people; i++) {
        int input;
        cin >> input;
        cost.push_back(input);
    }
    sort(cost.begin(), cost.end());
    int sum = 0;
    for (int i = 0; i < people; i++) {
        sum += cost[i];
        cost[i] = sum;

    }
    int answer = 0;
    for(int i=0;i<people;i++)
    {
        answer += cost[i];
    }
    cout<<answer<<endl;
}