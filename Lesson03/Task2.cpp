#include <iostream>
#include <time.h>

using namespace std;

// Task 2 - Five Functions

int IncrementByOne(int i) {	
	return i + 1;
}

int MultiplyByTwo(int i) {
	return i * 2;
}

int IncrementByFour(int i) {
	return i + 4;
}

int DivideByTwo(int i) {
	return i / 2;
}

int SubtractOriginalNumber(int i, int ogNumber) {
	return i - ogNumber;
}

//int main() {
//	int num;
//	cout << "Enter a number between 1-20: " << endl;
//	cin >> num;
//	if (num < 1 || num > 20) {
//		cout << "Invalid number!" << endl;
//	}
//	else {
//		int PlusOne = IncrementByOne(num);
//		int MultiplyTwo = MultiplyByTwo(PlusOne);
//		int PlusFour = IncrementByFour(MultiplyTwo);
//		int DivideTwo = DivideByTwo(PlusFour);
//		int SubractOriginal = SubtractOriginalNumber(DivideTwo, num);
//
//		cout << "Final result is: " << SubractOriginal;
//	}
//
//
//	return 0;
//}