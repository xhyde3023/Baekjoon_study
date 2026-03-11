#include <iostream>
#include <queue>
using namespace std;

struct ST {
	int i;
	int cnt;
};
int arr[101], visited[101];
queue<ST> q;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		arr[a] = b;
	}
	
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a] = b;
	}
	
	q.push({1, 0});
	visited[1] = 1;
	
	while(!q.empty()) {
		int i = q.front().i;
		int cnt = q.front().cnt;
		
		if(i == 100) {
			cout << cnt;
			break;
		}
		else {
			int k = 6;
			
			while(k > 0) {
				if(i < 100 - k + 1 && visited[i + k] == 0) {
					if(arr[i + k] == 0) {
						q.push({i + k, cnt + 1});
						visited[i + k] = 1;
					}
					else {
						q.push({arr[i + k], cnt + 1});
						visited[arr[i + k]] = 1;
					}
				}
				k--;
			}
		}
		
		q.pop();
	}
	
	return 0;
}