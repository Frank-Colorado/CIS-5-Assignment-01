#include <iostream>

using namespace std;

class Introduction {
public:
	void name() {
		
			string myName;

			cout << "What is your name? ";

			cin >> myName;

			cout << "Hello my name is " << myName << "!" << endl;

	}

	void goals() {
		
	}
};

int main () {
	
	Introduction intro;

	intro.name();

	return 0;
}	