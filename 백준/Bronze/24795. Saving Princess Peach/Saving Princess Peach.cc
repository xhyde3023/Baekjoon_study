#include <iostream>
#include <set>
using namespace std;
set<int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, y;
	cin >> n >> y;
	
	for(int i = 0; i < y; i++) {
		int a;
		cin >> a;
		m.insert(a);
	}
	
	int i = 0;
	
	while(i < n) {
		
		if(m.find(i) == m.end()) cout << i << "\n";
		i++;
		
	}
	cout << "Mario got " << m.size() << " of the dangerous obstacles.";
	
	return 0;
}
