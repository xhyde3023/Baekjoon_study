#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int n, home_cnt = 0, visited[100][100], home_size[25];
char arr[100][100];

queue<pair<int, int>> q;
int walk(int a, int b);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char a;
			cin >> a;
			arr[i][j] = a;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i][j] == '1' && visited[i][j] == 0) {
				home_size[home_cnt] = walk(i, j);
				home_cnt++;
			}
		}
	}
	
	sort(home_size, home_size + home_cnt);
	cout << home_cnt << "\n";
	
	for(int i = 0; i < home_cnt; i++) {
		cout << home_size[i] << "\n";
	}
	
	return 0;
}

int walk(int a, int b) {
	int cnt = 1;
	q.push({a, b});
	visited[a][b] = 1;
	
	while(!q.empty()) {
		int i = q.front().first;
		int j = q.front().second;
		
		if(i != n - 1 && arr[i + 1][j] == '1' && visited[i + 1][j] == 0) {
			cnt++;
			q.push({i + 1, j});
			visited[i + 1][j] = 1;
		}
		
		if(i != 0 && arr[i - 1][j] == '1' && visited[i - 1][j] == 0) {
			cnt++;
			q.push({i - 1, j});
			visited[i - 1][j] = 1;
		}
		
		if(j != n - 1 && arr[i][j + 1] == '1' && visited[i][j + 1] == 0) {
			cnt++;
			q.push({i, j + 1});
			visited[i][j + 1] = 1;
		}
		
		if(j != 0 && arr[i][j - 1] == '1' && visited[i][j - 1] == 0) {
			cnt++;
			q.push({i, j - 1});
			visited[i][j - 1] = 1;
		}
		q.pop();
	}
	return cnt;
}