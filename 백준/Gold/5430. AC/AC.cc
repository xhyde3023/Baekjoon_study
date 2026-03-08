#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, n, isReverse = 0, isError = 0;
	char trash;
	string l;
	
	cin >> t;
	
	while(t--) {
		list<int> LinkedList;
		isReverse = 0, isError = 0;
		
		cin >> l;
		cin >> n;
		cin >> trash;
		
		for(int i = 0; i < n; i++) {
			int a;
			cin >> a;
			LinkedList.push_back(a);
			
			if(i != n - 1) cin >> trash;
		}
		
		cin >> trash;
		
		for(int i = 0; i < l.length(); i++) {
			char a = l[i];
			
			if(a == 'R') {
				isReverse = isReverse? 0 : 1;
			}
			else {
				if(LinkedList.empty()) {
					cout << "error\n";
					isError = 1;
					break;
				}
				if(isReverse) {
					LinkedList.pop_back();
				}
				else {
					LinkedList.pop_front();
				}
			}
		}
		
		if(isError == 0) {
			if(n != 0) {
				cout << "[";
				
				if(isReverse) {
					while(!LinkedList.empty()) {
						cout << LinkedList.back();
						LinkedList.pop_back();
						
						if(!LinkedList.empty()) cout << ",";
					}
				}
				else {
					while(!LinkedList.empty()) {
						cout << LinkedList.front();
						LinkedList.pop_front();
						
						if(!LinkedList.empty()) cout << ",";
					}
				}
				cout << "]\n";
			}
			else cout << "[]\n";
		}
	}
	
	return 0;
}