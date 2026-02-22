#include <iostream>
#include <queue>
using namespace std;

struct Data{
	int x;
	int y;
	int cnt;
};

queue<Data> q;
int arr[1000][1000], hi[1000][1000], visit[1000][1000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
    
	int start_x, start_y;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int t;
			cin >> t;
			arr[i][j] = t;
			
			if(t == 2) {
				start_x = i;
				start_y = j;
			}
		}
	}
	
	q.push({start_x, start_y, 0});
	visit[start_x][start_y] = 1;
	
	while(!q.empty()) {
		int i = q.front().x;
		int j = q.front().y;
		int cnt = q.front().cnt;
		hi[i][j] = cnt;
		
		if(i && arr[i-1][j] && !visit[i-1][j]) {
			q.push({i - 1, j, cnt + 1});
			visit[i-1][j] = 1;
		}
			
		if(i < n-1 && arr[i+1][j] && !visit[i+1][j]) {
			q.push({i + 1, j, cnt + 1});
			visit[i+1][j] = 1;
		}
		
		if(j && arr[i][j-1] && !visit[i][j-1]) {
			q.push({i, j - 1, cnt + 1});
			visit[i][j-1] = 1;
		}
		
		if(j < m-1 && arr[i][j+1] && !visit[i][j+1]) {
			q.push({i, j + 1, cnt + 1});
			visit[i][j+1] = 1;
		}
		q.pop();
	}
		
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(!visit[i][j] && arr[i][j]) cout << -1 << " ";
			else cout << hi[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}