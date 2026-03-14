#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n; 
	
	while(n--) {
		map<int, int> m;
		int a;
		
		cin >> a;
		
		for(int i = 0; i < a; i++) {
			char l;
			int num;
			auto it = m.begin();
			
			cin >> l >> num;
			
			if(l == 'I') {
				it = m.find(num);
				
				if(it != m.end()) it -> second += 1;
				else			  m.insert({num, 0});
			}
			else {
				if(m.empty()) continue;
				
				if(num == 1) it = prev(m.end());
				
				if(it -> second == 0) m.erase(it);
				else 				  it -> second -= 1;
				
			}
		}
		
		if(m.empty()) cout << "EMPTY\n";
		else		  cout << prev(m.end()) -> first << " " << m.begin() -> first << "\n";
	}
	
	return 0;
}