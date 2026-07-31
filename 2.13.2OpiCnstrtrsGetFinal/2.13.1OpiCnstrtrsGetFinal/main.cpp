#include <iostream>
#include <string>
using namespace std;




//Declare class that will have constructor, getter and setter member functions as well as
//member var to hold a sentence.
//CODE:

//Declare  public access specifier.
//CODE:

//Declare constructor with string parameter and define string variable with setVar() x as parameter.
//CODE:

	//Declare void setVar() with parameter that takes string and sets string to member variable.
	//CODE:

	//setVar() executes because it was called from constructor above. 
	//This function "x" (could be y, z, a, b ect. just a placeholder) sentence from argument in main and store it in private.

	//Declare getVar() that retrieves the member variable and returns that sentence to main().
	//CODE:

	//Declare private access specifier.
	//CODE:

	//Declare string member variable to hold welcome sentence from constructor call in main.
	//CODE:

	//Local private var that can ONLY be accessed within the class it belongs to

int main()
{

	cout << "\n-----  getters and setters along with constructors------\n\n";

	//Create object/constructor of/from the class you created that holds a welcome sentence/string.
	//CODE:

	//Now call on that object using the getter() that outputs sentence to screen.
	//CODE:

	cout << "\n\n-------And the second constructor-------\n" << endl;

	//Now repeat using a second object and constructor with a different sentence.
	//CODE:

}

//Key Point: Constructor accepts input -> setter stores it in private data -> getter returns to main().