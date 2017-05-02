#include <iostream>
using namespace std;
#include <string>

int main() {
	string Food[7];
	cout << "Enter 7 of your favorite foods" << endl;
	for (int i = 0; i < 7; i++) {
		getline(cin, Food[i]);
		
	}
	cout << "1:" << Food[0] << endl;
	cout << "2:" << Food[1] << endl;
	cout << "3:" << Food[2] << endl;
	cout << "4:" << Food[3] << endl;
	cout << "5:" << Food[4] << endl;
	cout << "6:" << Food[5] << endl;
	cout << "7:" << Food[6] << endl;

}