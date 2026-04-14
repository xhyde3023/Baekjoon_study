#include <iostream>
#include <map>
using namespace std;
int n, m, arr[10], visited[10001];
void f(int d);
map<int, int> M;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if(M.find(t) != M.end()) M[t]++;
		else M.insert({t, 1});
	}
	
	f(0);
	
	
	return 0;
}

void f(int d) {
	if(d == m) {
		for(int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	
	for(auto it = M.begin(); it != M.end(); it++) {
		int i = it->first;
		
		if(M[i] != visited[i]) {
			arr[d] = i;
			visited[i] += 1;
			f(d + 1);
			visited[i] -= 1;
		}
	}
	
}