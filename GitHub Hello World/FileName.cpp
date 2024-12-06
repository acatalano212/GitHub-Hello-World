#include <iostream>
#include <string>
#include <ifstream>

using namespace std;

int main() {

	string name, ans;
	cout << "What is your name?" << endl;
	cin >> name;
	cin.ignore();
	cout << "Hello " << name << endl;
	cout << "What do you do?" << endl;
	getline(cin, ans);
	cout << "You are a " << ans << ", thats awesome!" << endl;
	return 0;
}