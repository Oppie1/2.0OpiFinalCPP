#include <iostream>
#include<fstream>
using namespace std;



int main() {

	cout << "Create file and variables that store information. Then write/cin file and write information to it." << endl;

	//Instantiate object named adamFile with "molts.txt" as parameter of ofstream class
	//CODE:

	//Request information from user
	//IMPORTANT: Let user know format to enter as data needs to be separated in certain fashion
	//to match the adamFile output (to file)
	cout << "Enter players ID, Name, and Money leaving a space or pressing enter after each piece of data" << endl;

	cout << "press Ctrl+Z to quit\n " << endl;

	//Declare 3 uninitialized vars int, string, double, that will hold values user inputs named
	//idNumber, name and money.
	//CODE:

	//Declare while loop that controls input by reading idNumber, name and money via the cin statement.
	//CODE:

	//Within while loop output to object adamFile (into molts.txt) information user input from while condition.
	//Format it with spaces in between each piece of data -> "  "
	//CODE:

}