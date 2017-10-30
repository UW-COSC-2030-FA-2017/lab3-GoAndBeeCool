#include <iostream>
#include <stdio.h>

using namespace std;

void computeShortSum(short n) {

	int i;
	short sum = 0;

	for (i = 1; i <= n; ++i) {
		sum = sum + i;

		
		if (sum < 0) {
			cout << "Overflow occured when sum = " << sum << " while n was " << i << endl; 
			break;
		}
	}
	cout << " n = " << i << " Sum = " << sum << endl;
}

void computeLongSum(long n) {

	int i;
	long sum = 0;

	for (i = 1; i <= n; ++i) {
		sum = sum + i;

		
		if (sum < 0) {
			cout << "Overflow occured when sum = " << sum << " while n was " << i << endl;
			break;
		}
	}
	cout << " n = " << i << " Sum = " << sum << endl;

}



int main() {

	bool quit = false;

	//Question 1 and 2
	//Overflow occured when sum = -32640 while n was 256
	while (!quit) {
		short n = 0;

		cout << "Enter a number, 0 to quit" << endl;
		cin >> n;
		if (cin.fail()) {
			cerr << "The number is out of range. Try again." << endl;
			cin.clear(); 
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		cout << "n = " << n << endl;
		if (n == 0) {
			quit = true;
		}
		else if (n < 0) {
			cout << "Enter a positive value pleeeeaaase" << endl;
		}
		else {
			computeShortSum(n);
		}
	}

	quit = false;


	//Question 3
	//Overflow occured when sum = -2147450880 while n was 65536
	while (!quit) {
		long x = 0;

		cout << "Enter a number, 0 to quit" << endl;
		cin >> x;
		if (cin.fail()) {
			cerr << "The number is out of range. Try again." << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}


		if (x == 0) {
			quit = true;
		}
		else if (x < 0) {
			cout << "Enter a positive value pleeeeaaase" << endl;
		}
		else {
			computeLongSum(x);
		}
	}

	system("Pause");

}