#include <iostream>
#include <windows.h>
using namespace std;


int main() {
	int q = 1;
	while (q != 0) {
		//символ яким буде виводитись лінія
		cout << "\nSet the symbol: ";
		char a;
		cin >> a;

		//к-сть символів для лінії
		cout << "Set length a line: ";
		int b;
		cin >> b;

		//як саме буде виводитись лінія
		cout << "Choose v - vertical or h - horizontal line: ";
		char line;
		cin >> line;


		if (line == 'h'){
			//швидкість з якою буде виводитись лінія
			cout << "How do you want to print a line(s - slowly, n - normal, f - fast): ";
			char speed;
			cin >> speed;
			if (speed == 's') {
				for (int i = 0; i <= b; i++) {
					cout << a;
					Sleep(200);
				}
			}
			else if (speed == 'n') {
				for (int i = 0; i <= b; i++) {
					cout << a;
					Sleep(80);
				}
			}
			else if (speed == 'f') {
				for (int i = 0; i <= b; i++) {
					cout << a;
					Sleep(20);
				}
			}
			else {
				cout << "Invalid" << endl;
			}
		}
		else if (line == 'v') {
			//швидкість з якою буде виводитись лінія
			cout << "How do you want to print a line(s - slowly, n - normal, f - fast): ";
			char speed;
			cin >> speed;
			if (speed == 's') {
				for (int i = 0; i <= b; i++) {
					cout << a << endl;
					Sleep(200);
				}
			}
			else if (speed == 'n') {
				for (int i = 0; i <= b; i++) {
					cout << a << endl;
					Sleep(80);
				}
			}
			else if (speed == 'f') {
				for (int i = 0; i <= b; i++) {
					cout << a << endl;
					Sleep(20);
				}
			}
			else {
				cout << "Invalid" << endl;
			}
		
		}
		
		
		else {
			cout << "Invalid, try again";
		}
		cout << "\nDo you want to continue or exit(1 - yes/ 0 - no)" << endl;
		cin >> q;
	}		
}
		
