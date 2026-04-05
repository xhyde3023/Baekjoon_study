#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0, isInfected = 0;
	cin >> n;
	
	while(n--) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
		
		if(b == 1) isInfected = 1;
	}
	
	if(!isInfected) {
		cout << 0;
		return 0;
	}
	
	sort(v.begin(), v.end());
	
	int r = 1000001, a = v[0].first, b = v[0].second;
	
	for(int i = 1; i < v.size(); i++) {
		if(b != v[i].second) {
			if(v[i].first - a < r) r = v[i].first - a;
		}
		a = v[i].first;
		b = v[i].second;
	}
	
	r -= 1;
	
	if(v[0].second == 1) cnt++;
	
	for(int i = 1; i < v.size(); i++) {
		if(v[i].second == 1) {
			if(v[i - 1].second == 0) cnt++;
			else if(v[i].first - v[i - 1].first > r) cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}

