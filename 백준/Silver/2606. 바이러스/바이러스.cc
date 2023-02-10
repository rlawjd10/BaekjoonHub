//2606
#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
//바이러스 걸리게 되는 컴퓨터의 수
int virus = -1;

//깊이 우선 탐색 _ stack이나 재귀함수를 사용한다.
void dfs(int x) {
	visited[x] = true;
	virus++;
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) dfs(y);
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);
	cout << virus;
}