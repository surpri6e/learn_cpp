#include <iostream>
#include <vector>

// typedef double T;

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int left_boundary(int x, const vector<int> &arr) {
	int left = -1;
	while(left < int(arr.size()) && arr[left + 1] < x) {
		left++;
	}
	return left;
}

int right_boundary(int x, const vector<int> &arr) {
	int right = arr.size();
	while(right > 0 && arr[right - 1] > x) {
		right--;
	}
	return right;
}

int main() {

	vector<int> arr = {2, 2, 4, 5, 5, 5, 7, 7, 7, 7,};
	int x = 0;
	cout << "What to find?";
	cin >> x;
	int left = left_boundary(x, arr);
	int right = right_boundary(x, arr);
	cout << "Left = " << left << ", Right = " << right << endl;

	return 0;
}
