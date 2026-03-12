#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 1, a, b;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({b, a});
	}
	
	sort(v.begin(), v.end());
	
	int finish_t = v[0].first;
	int start_t = v[0].second;
	
	for(int i = 1; i < n; i++) {
		if(finish_t <= v[i].second) {
			start_t = v[i].second;
			finish_t = v[i].first;
			sum++;
		}
	}
	
	cout << sum;
	
	return 0;
}
