#include <iostream>
#include <algorithm>

using namespace std;
int n, m, arr[10], ans[10], visited[10];
void DFS(int d);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	DFS(0);
	
	
	return 0;
}

void DFS(int d) {
	if(d == m) {
		for(int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	
	for(int i = 0; i < n; i++) {
		if(visited[i] == 0) {
			visited[i] = 1;
			ans[d] = arr[i];
			DFS(d + 1);
			visited[i] = 0;
		}
	}
}