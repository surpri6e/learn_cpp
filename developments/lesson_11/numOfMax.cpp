#include <iostream> 
using namespace std;

int main() {
	int N;
	cin >> N;
	int x;
	cin >> x;

	int max_x = x;
	int counter = 0;

	for(int i = 1; i < N; i++) {
		cin >> x;
		if(x % 2 != 0) continue;
		if(x > max_x) {
			max_x = x;
			counter = 1;
		} else if(x == max_x) {
			counter++;
		}
	}

	cout << "Numbers of maximals: " << counter << endl;

	return 0;
}

