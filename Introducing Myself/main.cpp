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
		
		cout << "I hope to one day become a fully fledged software engineer or game developer who is capable of leading, teaching, and helping other junior developers who are passionate and interested in coding like I am now in jumpstarting their careers in the field." << endl;
	
	}
};

int main () {
	
	Introduction intro;

	intro.name();

	intro.goals();

	return 0;
}	