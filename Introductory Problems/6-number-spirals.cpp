#include <iostream>
#include <string>
using namespace std;

int main() {
	long n;
	cin >> n;
	
	long x;
	long y;
	long send;

	for (long i = 0; i < n; i++) {
		cin >> x;
		cin >> y;

		if (x > y) {
			if (x % 2 == 0) {
				send = (x * x) - (y - 1);
			}
			else {
				send = ((x-1) * (x-1)) + y;
			}
		}
		else {
			if (y % 2 == 1) {
				send = (y * y) - (x - 1);
			}
			else {
				send = ((y - 1) * (y - 1)) + x;
			}
		}
		cout << send << endl;
	}

	return 0;
}
