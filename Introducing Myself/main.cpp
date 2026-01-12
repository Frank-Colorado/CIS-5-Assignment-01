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

	void interests() {
				
		cout << "I enjoy playing video games and within the last few months I have been teaching myself game programming on my free time!" << endl;
	
	}

	void dreams() {
	
		cout << "My dream is to either become a software engineer or a game developer. As I mentioned previously I hope to one day develop and publish my own game! Whether this means creating a game with a team at a game studio or self-publishing my own game on steam!" << endl;
	
	}
};

int main () {
	
	Introduction intro;

	intro.name();

	intro.goals();

	intro.interests();

	return 0;
}	