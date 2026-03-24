#include <iostream>
using namespace std;

int arr[10], n, m;
void DFS(int i, int d);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 1; i <= n - m + 1; i++) {
		arr[i] = 1;
		DFS(i, 1);
		arr[i] = 0;
	}
	
	return 0;
}

void DFS(int i, int d) {	
	
	if(d == m) {
		for(int k = 1; k <= n; k++) {
			if(arr[k]) cout << k << " ";
		}
		cout << "\n";
		return;
	}
	
	for(int k = i + 1; k <= n; k++) {
		arr[k] = 1;
		DFS(k, d + 1);
		arr[k] = 0;
	}
	
}