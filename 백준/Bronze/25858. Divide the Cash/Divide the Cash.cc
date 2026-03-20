#include <iostream>
using namespace std;
int arr[30000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, tot, sum = 0;
	cin >> n >> tot;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	
	for(int i = 0; i < n; i++) {
		cout << tot * arr[i] / sum << "\n";
	}
	
	
	return 0;
}
