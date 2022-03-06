#include <iostream>
#include <queue>
#include <stack>

using namespace std;
#define MAX 1002

int map[MAX][MAX];
bool visited[MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
queue<int> q;

void print_mtrx(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

}

void bfs(int start, int node) {
    visited[start] = true;
    q.push(start);
    while(!q.empty())
    {
        int next_start = q.front();
        cout << next_start << " ";
        q.pop();
        for(int i=1;i<=node;i++)
        {
            if((map[next_start][i] != 0) && (visited[i] == false))
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void dfs(int start, int node) {
    visited[start] = true;
    cout << start << " ";
    for (int i = 1; i <= node; i++) {
        if ((map[start][i] != 0) && (visited[i] == false))
            dfs(i, node);
    }
}

int main(void) {
    cin.sync_with_stdio(false);
    int node, vertax, start;
    cin >> node >> vertax >> start;
    for (int i = 0; i < vertax; i++) {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }
    dfs(start, node);
    for (int i = 0; i <= node; i++)
        visited[i] = false;
    cout << "\n";
    bfs(start, node);
}