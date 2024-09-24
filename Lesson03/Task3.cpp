#include <iostream>
#include <vector>

using namespace std;

void GuessNumber(int target, vector<int> guesses) {
	int guess;
	while (guesses.size() < 3) {
		cout << "Enter a number: " << endl;
		cin >> guess;
		guesses.push_back(guess);
		if (guess < 1 || guess > 10) {
			cout << "Invalid range!!" << endl;
			break;
		}
		if (guess == target) {
			cout << "YOU WIN!! TOOK YOU " << guesses.size() << " GUESSES!!" << endl;
			break;
		}
	}
	if (guesses.size() == 3 && guess != target) {
		cout << "You didn't get it.... What a shame." << endl;
	}
}

//int main() {
//
//	srand(time(nullptr));
//
//	int random = rand() % 10 + 1;
//
//	vector<int> guesses;
//
//	GuessNumber(random, guesses);
//
//	return 0;
//}