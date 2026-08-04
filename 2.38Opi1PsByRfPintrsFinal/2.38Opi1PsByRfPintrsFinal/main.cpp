#include <iostream>
using namespace std;



//Declare void function passByValue with int var parameter.
//CODE:

//Declare void function passByReference with int pointer var as its parameter.
//CODE:

int main() {

	//Declare two vars betty and sandy. Initialized to 13 and 17 respectively
	//CODE:

	//Output displaying value of each variable.
	//CODE:

	cout << "\nNow main calls to the outside (of main() program) functions and each executes (below)\n";

	//Call passByValue function with parameter betty.
	//CODE:

	//Call passByReference with parameter of memory address of sandy.
	//CODE:

	//Output betty has only changed in function and betty to screen
	//CODE:

	//Output sandy has changed display the sandy var
	//CODE:

}

//Define function void pass by value and set x = 99.
//CODE:

	//Declare int variable x and initialize it to 99.
	//CODE:

	cout << "\nThis is the passByValue function outside of main. When main 'calls'\n";
	cout << "this runs/execute and show to screen I changed betty (x here) value only here to: \n";
	//Output displaying  x value to the screen.
	//CODE:

//Define passByReference function with int pointer var as its parameter.
//CODE:


//Declare pointer var and set it equal to 66
//CODE:

cout << "\nThis is the passByReference function and when call executes which changes the value of\n";
cout << "sandy (x here) to 66. The key difference is when control is returned to main sandy value\n";
cout << "stays changed and will be 66 at that point. The value in the function is:\n";

//Output displaying pointer var to screen.
//CODE: