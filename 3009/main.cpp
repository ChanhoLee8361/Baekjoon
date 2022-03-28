#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define SIZE 1001
int width[SIZE];
int height[SIZE];

int main(void) {
    cin.sync_with_stdio(false);
    int first, second;
    int ans_width, ans_height;
    deque<pair<int, int>> square;
    for (int i = 0; i < 3; i++) {
        cin >> first >> second;
        square.push_back(make_pair(first, second));
        width[first]++;
        height[second]++;
    }
    deque<int> answer;
    for (int i = 0; i < square.size(); i++) {
        int width_info = square[i].first;
        int height_info = square[i].second;
        if (width[width_info] == 1) {
            ans_width = width_info;
        }
        if (height[height_info] == 1) {
            ans_height = height_info;
        }
    }
    cout << ans_width << " " << ans_height << endl;
}