#include <iostream>
#include <string>

using namespace std;

int main() {

	string name, ans;
	int age;
	cout << "What is your name?" << endl;
	cin >> name;
	cin.ignore();
	cout << "Hello " << name << endl;
	cout << "What do you do?" << endl;
	getline(cin, ans);
	cout << "You are a " << ans << ", thats awesome!" << endl;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "Wow, you're only " << age << " years old!!!" << endl;
	return 0;
}