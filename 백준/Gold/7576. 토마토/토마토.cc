#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int row;
	int col;
	int day;
};
int arr[1000][1000], cnt = 0, cnt_all = 0;
void inserting(int row, int col, int day);
queue<Node> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m, n;
	cin >> m >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(arr[i][j] == 1) {
				q.push({i, j, 0});
				arr[i][j] = 1;
			}
		}
	}
	
	
	if(q.empty()) {
		cout << -1;
		return 0;
	}
	else {
		while(!q.empty()) {
			int i = q.front().row;
			int j = q.front().col;
			cnt = q.front().day;
			
			if(i < n - 1) inserting(i + 1, j, cnt + 1);
			if(i > 0)	  inserting(i - 1, j, cnt + 1);
			if(j < m - 1) inserting(i, j + 1, cnt + 1);
			if(j > 0)	  inserting(i, j - 1, cnt + 1);
			
			q.pop();
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(arr[i][j] != 0) {
					cnt_all++;
				}
			}
		}
		if(cnt_all == n*m) cout << cnt;
		else cout << -1;
	}
	
	return 0;
}

void inserting(int row, int col, int day) {
	if(arr[row][col] == 0) {
		q.push({row, col, day});
		arr[row][col] = 1;
	}
}
