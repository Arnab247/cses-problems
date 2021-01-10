#include <iostream>
#include <string>
using namespace std;

int main() {
	string textinput;
	cin >> textinput;

	char letter;
	letter = textinput[0];
	int l=0, m=0;

	for (int i = 0; i < textinput.size(); i++) {
		if (textinput[i] == letter) {
			l++;
			if (l > m) {
				m = l;
			}
		}
		else {
			letter = textinput[i];
			l=1;
		}
	}

	cout << m;

	return 0;
}
