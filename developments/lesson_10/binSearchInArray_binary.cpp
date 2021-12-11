#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int left_boundary(int x, const vector<int> &arr) {
	int left = -1;
	int right = arr.size();
	while(right - left > 1) {
		int mid = (left + right) / 2;
		if(arr[mid] < x) {
			left = mid;
		} else {
			right = mid;
		}
	}
	return left;

}
int right_boundary(int x, const vector<int> &arr) {
	int left = -1;
	int right = arr.size();
	while(right - left > 1) {
		int mid = (left + right) / 2;
		if(arr[mid] <= x) {
			left = mid;
		} else {
			right = mid;
		}
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
