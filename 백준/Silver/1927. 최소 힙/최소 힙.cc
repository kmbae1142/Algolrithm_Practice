#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int num;
	int n;
	priority_queue<int> q;

	cin >> num;

	for (int i = 0; i < num; ++i) {
		cin >> n;
		if (!n) {
			if (q.empty()) {
				cout << "0" << '\n';
			}
			else {
				cout << -(q.top()) << '\n';
				q.pop();
			}
		}
		else {
			q.push(-n);
		}
	}
	
}