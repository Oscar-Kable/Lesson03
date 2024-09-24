#include <iostream>

using namespace std;

int SumOfRange(int n) {
	if (n == 0) {
		return n;
	}
	else {
		return n + SumOfRange(n - 1);
	}
}

//int main() {
//	cout << SumOfRange(10);
//
//	return 0;
//}