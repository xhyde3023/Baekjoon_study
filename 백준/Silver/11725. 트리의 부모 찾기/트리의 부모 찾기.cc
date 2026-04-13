#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> v[100001];
int arr[100001], visited[100001];
void BFS(int n);
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int t = n - 1;
	while(t--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	arr[1] = 1;
	visited[1] = 1;
	BFS(1);
	
	for(int i = 2; i <= n; i++) {
		cout << arr[i] << "\n";
	}
	
	
	return 0;
}

void BFS(int n) {
	for(int i = 0; i < v[n].size(); i++) {
		if(visited[v[n][i]] == 0) {
			q.push(v[n][i]);
			arr[v[n][i]] = n;
			visited[v[n][i]] = 1;
		}
	}
	if(!q.empty()) {
		int a = q.front();
		q.pop();
		BFS(a);
	}
}