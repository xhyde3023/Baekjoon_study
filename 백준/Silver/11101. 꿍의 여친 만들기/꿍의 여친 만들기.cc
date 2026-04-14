#include <iostream>
#include <sstream>
#include <map>
#include <queue>

using namespace std;
queue<string> q;
map<string, int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	cin.ignore();
	
	for(int i = 0; i < n; i++) {
		int sum1 = 1000000;
		string l, token, name, num, group;
		
		cin >> l;
		cin.ignore();
		stringstream ll(l);
		
		while(getline(ll, token, ',')) {
			stringstream t(token);
			getline(t, name, ':');
			getline(t, num, ':');
			m.insert({name, stoi(num)});
		}
		
		cin >> l;
		cin.ignore();
		stringstream ll2(l);
		
		while(getline(ll2, group, '|')) {
			int sum = 0; 
			stringstream gg(group);
			
			while(getline(gg, name, '&')) {
				if(m.find(name) != m.end()) {
					if(sum < m[name]) sum = m[name];
				}
			}
			if(sum < sum1) sum1 = sum;
		
		}
		
		cout << sum1 << "\n";
		m.clear();
	}
	
	return 0;
}
