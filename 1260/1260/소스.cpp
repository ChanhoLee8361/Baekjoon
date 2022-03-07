#include <iostream>
#include <queue>
using namespace std;

#define size 1002
int map[size][size];
bool visited[size];
queue<int> q;

void init(int node)
{
	for (int i = 0; i <= node; i++)
	{
		visited[i] = false;
	}
}
void dfs(int start, int node)
{
	visited[start] = true;
	cout << start << " ";
	for (int i = 1; i <= node; i++)
	{
		if ((map[start][i] != 0) && (!visited[i]))
		{
			dfs(i, node);
		}
	}
}
void bfs(int start, int node)
{
	visited[start] = true;
	q.push(start);
	while (!q.empty())
	{
		int front = q.front();
		cout << front << " ";
		q.pop();
		for (int i = 1; i <= node; i++)
		{
			if ((map[front][i] != 0) && (!visited[i]))
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}
int main(void)
{
	cin.sync_with_stdio(false);
	int node, vertax, start;
	cin >> node >> vertax >> start;
	for (int i = 0; i < vertax; i++)
	{
		int first, second;
		cin >> first >> second;
		map[first][second] = 1;
		map[second][first] = 1;
	}
	dfs(start, node);
	cout << "\n";
	init(node);
	bfs(start, node);
}