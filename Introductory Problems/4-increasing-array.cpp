#include <iostream>
#include <string>
using namespace std;

int main() {
	int l;
	cin >> l;
	long cur;
	long sumof = 0;
	long in;
	cin >> cur;

	for (int i = 1; i < l; i++) {
		cin >> in;
		if (in < cur) {
			sumof += (cur - in);
		}
		else {
			cur = in;
		}
	}

	cout << sumof;
	return 0;
}
