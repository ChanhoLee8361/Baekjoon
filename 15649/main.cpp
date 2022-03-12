#include <iostream>

using namespace std;
#define MAX 10
int info[MAX];
bool visited[MAX];

void dfs(int N, int M, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            cout << info[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            info[cnt] = i;
            dfs(N, M, cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void) {
    cin.sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    int cnt = 0;
    dfs(N, M, cnt);

}