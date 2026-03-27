#include <iostream>
#include <map>
using namespace std;
map<long long, long long> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	int n;
	cin >> n;
	
	while(n--) {
		long long a;
		cin >> a;
		
		if(m.find(a) != m.end()) m[a]++;
		else					 m.insert({a, 1});
	}
	
	long long int max_value, max_cnt = -1;
	
	for (auto it = m.begin(); it != m.end(); it++) {
	    if (it -> second > max_cnt) {
	        max_cnt = it -> second;
	        max_value = it -> first;
	    }
	}
	
	cout << max_value;
	
	return 0;
}
