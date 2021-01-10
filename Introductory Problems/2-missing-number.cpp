#include <iostream>
using namespace std;

int main() {
	int n;
	int s = 0;
	cin >> n;

	int y = (n + 1) * int(n / 2);
	if (n % 2 == 1) {
		y += (n + 1) / 2;
	}

	for (int i = 0; i < (n-1); i++) {
		int x;
		cin >> x;
		s += x;
	}

	y -= s;
	cout << y;
	return 0;
}
