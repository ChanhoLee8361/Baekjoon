#include <iostream>
#include <queue>

using namespace std;
#define SIZE 102
int map[SIZE][SIZE];
bool visited[SIZE];

void bfs(int computers) {
    int start = 1;
    visited[start] = true;
    queue<int> info;
    info.push(start);
    while (!info.empty()) {
        int next = info.front();
        info.pop();
        for (int i = 1; i <= computers; i++) {
            if (!visited[i] && (map[next][i] == 1)) {
                visited[i] = true;
                info.push(i);
            }
        }
    }
    int answer=-1;
    for (int i = 1; i <= computers; i++)
        if (visited[i] == true)
            answer++;
    cout<<answer;
}


int main(void) {
    cin.sync_with_stdio(false);
    int computers, vertax;
    cin >> computers >> vertax;
    for (int i = 0; i < vertax; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    bfs(computers);
}