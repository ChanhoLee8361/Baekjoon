#include <iostream>
#include <queue>

using namespace std;

#define size 1002
queue<int> q;
bool visited[size];
int map[size][size];

void bfs(int start) {

}

void dfs(int start, int node) {
    visited[start] = true;
    cout<<start;
    for(int i=1;i<=node;i++)
    {
        if((map[start][i] != 0)&&(!visited[i]))
        {

        }
    }
}

int main(void) {
    cin.sync_with_stdio(false);
    int node, vertax, start;
    cin >> node >> vertax >> start;
    for (int i = 0; i < vertax; i++) {
        int first, second;
        cin >> first >> second;
        map[first][second] = 1;
        map[second][first] = 1;
    }
    dfs(start, node);
}