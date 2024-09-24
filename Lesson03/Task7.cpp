/* Using recursion was super hard, used for loops instead. ChatGPT'd a way to use recursion so I'm taking notes for next time I need recursion*/

#include <iostream>

using namespace std;

void PrintBottomDiamond(int& width, int& max) {
	for (int i = width - 2; i > 0; i -= 2) {
		int spaces = (max - i) / 2;
		cout << string(spaces, ' ') << string(i, '*') << endl;
	}
}

void PrintTopDiamond(int& width, int& max) {
	for (int i = 1; i <= width; i += 2) {
		int spaces = (max - i) / 2;
		cout << string(spaces, ' ') << string(i, '*') << endl;
	}
}

int main() {
	int width = 99;
	int max = width;
	PrintTopDiamond(width, max);
	PrintBottomDiamond(width, max);
	

	return 0;
}