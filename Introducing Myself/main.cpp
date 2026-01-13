#include <iostream>


// Here I define the namespace for std to avoid having to type std:: before every standard library object as demonstated in the lecture video.
using namespace std;

// Here I created a class called Introduction that contains several methods 
// I did this to keep my code more organized so that I did not have to write all my code in the main function
// I used the W3 schools website to help me understand classes a bit better as well as other various blogs
class Introduction {

// Here I used public so that I can access the methods of this class in the main function
public:
	// Here I created the various methods that will output my introduction information
	// name method to get and output my name
	void name() {
		// I declare a variable with type string to hold my name
		string myName;
		// Here I prompt the user to enter their name
		cout << "What is your name? ";
		// Here I use cin to get my input and store it in the myName variable
		cin >> myName;
		// Here I output my name using the myName variable
		cout << "Hello my name is " << myName << "!" << endl;

	}
	// goals method to output my goals
	void goals() {
		
		// Here I output my goals
		cout << "My Goals" << endl;
		cout << "I hope to one day become a fully fledged software engineer or game developer who is capable of leading, teaching, and helping other junior developers who are passionate and interested in coding like I am now in jumpstarting their careers in the field." << endl;
	
	}
	// interests method to output my interests
	void interests() {
		
		// Here I output my interests
		cout << "My Interests" << endl;
		cout << "I enjoy playing video games and within the last few months I have been teaching myself game programming on my free time!" << endl;
	
	}
	// dreams method to output my dreams
	void dreams() {

		// Here I output my dreams
		cout << "My Dreams" << endl;
		cout << "My dream is to either become a software engineer or a game developer. As I mentioned previously I hope to one day develop and publish my own game! Whether this means creating a game with a team at a game studio or self-publishing my own game on steam!" << endl;
	
	}
	// future method to output my future plans
	void future() {

		// Here I decided to declare multiple string variables for each year of my future plans to keep things more oganized instead of writing everything in one huge output 
		string oneYear = "In one year, I hope to be advancing my degree in software engineering and would also like to participate in available internships over the summer at any company or game studio that will have me.";

		string threeYears = "In three years, I hope to have graduated with my degree in software engineering and be able to start interviewing for junior developer positions at various companies or game studios.";

		string fiveYears = "In five years, I hope to be working as a mid-level engineer that is able to contribute to various projects and help mentor junior developers who are just starting out in their careers.";

		string sevenYears = "In seven years, I hope to be working as a senior software engineer or where I can lead projects where I feel accomplished with the projects I have created and hopefully make a positive change in peoples lives.";

		// Here I created an output for each year variable so I could output each one and have endlines in between each so the output would be easier to read
		cout << "My Future Plans" << endl;

		cout << oneYear << endl;

		cout << threeYears << endl;

		cout << fiveYears << endl;

		cout << sevenYears << endl;

	}
};

// My main function
int main () {
	
	// Here I created an object of the Introduction class so I can access its methods
	// I did this because I saw an example doing this on a developers tutorial blog and decided to try it out myself
	// I could have also just called my methods directly using Introduction::methodName() which was also demonstrated in the blog but I wanted to try this way instead
	Introduction intro;

	// Here I called each method of the Introduction class using the intro object I created above in the order I wanted the information to be output
	intro.name();

	intro.goals();

	intro.interests();

	intro.dreams();

	intro.future();

	return 0;
}	