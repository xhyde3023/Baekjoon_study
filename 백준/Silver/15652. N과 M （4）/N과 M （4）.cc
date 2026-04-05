#include <iostream>
using namespace std;
int n, m;
int arr[10];
void DFS(int a, int d);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	DFS(1, 1);
	
	return 0;
}

void DFS(int a, int d) {
	if(d == m + 1) {
		for(int i = 1; i <= m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	
	for(int i = a; i <= n; i++){
		arr[d] = i;
		DFS(i, d + 1);
	}
	
}
