#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n, cnt = 0;
char arr[101][101];
queue<pair<int, int>> q;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char t = arr[i][j];
			
			if(t == 'R' || t == 'B' || t == 'G') {
				q.push({i, j});
				arr[i][j] += 32;
				
				while(!q.empty()) {
					int i = q.front().first;
					int j = q.front().second;
					
					if(i > 0 && arr[i - 1][j] == t) {
						q.push({i - 1, j});
						arr[i - 1][j] += 32;
					}
					
					if(j > 0 && arr[i][j - 1] == t) {
						q.push({i, j - 1});
						arr[i][j - 1] += 32;
					}
					
					if(i < n - 1 && arr[i + 1][j] == t) {
						q.push({i + 1, j});
						arr[i + 1][j] += 32;
					}
					
					if(j < n - 1 && arr[i][j + 1] == t) {
						q.push({i, j + 1});
						arr[i][j + 1] += 32;
					}
					q.pop();
				}
				cnt++;
			}
		}
	}
	
	cout << cnt;
	cnt = 0;
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(arr[i][j] == 'r') arr[i][j] = 'g';
			
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char t = arr[i][j];
			arr[i][j] -= 32;
			
			if(t == 'g' || t == 'b') {
				q.push({i, j});
				
				while(!q.empty()) {
					int i = q.front().first;
					int j = q.front().second;
					
					if(i > 0 && arr[i - 1][j] == t) {
						q.push({i - 1, j});
						arr[i - 1][j] -= 32;
					}
					
					if(j > 0 && arr[i][j - 1] == t) {
						q.push({i, j - 1});
						arr[i][j - 1] -= 32;
					}
					
					if(i < n - 1 && arr[i + 1][j] == t) {
						q.push({i + 1, j});
						arr[i + 1][j] -= 32;
					}
					
					if(j < n - 1 && arr[i][j + 1] == t) {
						q.push({i, j + 1});
						arr[i][j + 1] -= 32;
					}
					q.pop();
				}
				cnt++;
			}
		}
	}
	
	cout << " " << cnt;
	
	
	return 0;
}