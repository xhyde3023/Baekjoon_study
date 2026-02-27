#include <iostream>
#include <queue>
using namespace std;

struct Data {
	int i;
	int j;
	int cnt;
};
int n, m, min_walk = 10001;
char arr[100][100], visited[100][100];
queue<Data> q;
void walk();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			char a;
			cin >> a;
			arr[i][j] = a;
		}
	}
	
	q.push({0, 0, 1});
	visited[0][0] = 1;
	walk();
	
	cout << min_walk;
	
	return 0;
}

void walk() {	
	while(!q.empty()) {
		int i = q.front().i;
		int j = q.front().j;
		int cnt = q.front().cnt;
		
		if(i == n - 1 && j == m - 1) {
			if(min_walk > cnt) {
				min_walk = cnt;
			}
		} else {
			if(i != n - 1 && arr[i + 1][j] == '1' && visited[i + 1][j] == 0) {
				q.push({i + 1, j, cnt + 1});
				visited[i + 1][j] = 1;
			}
			
			if(i != 0 && arr[i - 1][j] == '1' && visited[i - 1][j] == 0) {
				q.push({i - 1, j, cnt + 1});
				visited[i - 1][j] = 1;
			}
			
			if(j != m - 1 && arr[i][j + 1] == '1' && visited[i][j + 1] == 0) {
				q.push({i, j + 1, cnt + 1});
				visited[i][j + 1] = 1;
			}
			
			if(j != 0 && arr[i][j - 1] == '1' && visited[i][j - 1] == 0) {
				q.push({i, j - 1, cnt + 1});
				visited[i][j - 1] = 1;
			}
		}
		q.pop();
	}
}