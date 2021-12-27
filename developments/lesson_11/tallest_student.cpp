#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int numberOfStudents;
	cin >> numberOfStudents;
	vector<string> maxNames;
	int maxHeight;
	
	int height;
	string name;
	cin >> name >> height;

	maxNames.push_back(name);
	maxHeight = height;

	for(int i = 1; i < numberOfStudents; i++) {
		cin >> name >> height;
		if(height > maxHeight) {
			maxHeight = height;
			maxNames.clear();
			maxNames.push_back(name);
		} else if(height == maxHeight) {
			maxNames.push_back(name);
		}
	}

	cout << "Tallest student height = " << maxHeight << ", their names: " << endl;
	for(auto name: maxNames) {
		cout << name << endl;
	}

	return 0;
}
