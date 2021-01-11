#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n == 1) {
		cout << "1";
		return 0;
	}
	if (n < 4) {
		cout << "NO SOLUTION";
		return 0;
	}
	

	bool wn = true;
	int x = (n/2) + 1;
	int y = 1;

	for (int i = 0; i < n; i++) {
		if (wn) {
			cout << x;
			x++;
			wn = false;
		}
		else {
			cout << y;
			y++;
			wn = true;
		}
		cout << " ";
	}

	return 0;
}
