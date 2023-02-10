//1260
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
int n, m;

bool visited[1001];
bool visited2[1001];

//깊이 우선 탐색_stack이랑 재귀함수 사용하기
void dfs(int x) {
	visited[x] = true;
	cout << x << " ";
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) dfs(y);
	}
}

//너비 우선 탐색_queue를 사용한다.
void bfs(int x) {
	queue<int> q;
	visited2[x] = true;
	q.push(x);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		cout << y << " ";
		for (int i = 0; i < graph[y].size(); i++) {
			int z = graph[y][i];
			if (!visited2[z]) {
				visited2[z] = true;
				q.push(z);
			}
		}
	}
}

int main() {
	int start;

	//정점, 간선 개수, 시작노드 입력받기
	cin >> n >> m >> start;

	//간선 개수 만큼 두 정점의 번호 입력받기
	for (int i = 0; i < m; i++) {
		int one, two;
		cin >> one >> two;
		graph[one].push_back(two);
		graph[two].push_back(one);
	}

	//정렬하기
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	

	dfs(start);
	cout << "\n";
	bfs(start);
}