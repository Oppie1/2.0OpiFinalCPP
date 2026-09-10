#include <iostream>
using namespace std;




//Declare template for class Adam 
//CODE:
template <class Adam>

//Define function template named addTogether with return type Adam, parameters 
//Adam a and Adam b, that returns their sum (a + b)
//CODE:
Adam addTogether(Adam a, Adam b) {

	return a + b;
}

int main() {

	//Declare double variables x and y, initialized to 7.65 and 43.54 respectively, and
	//declare float z uninitialized to store result.
	//CODE:
	double x = 7, y = 99, z;

	//Declare int vars c and d, initialize them to 3 and 3.14 respectively and declare
	//e uninitialized to store result.
	//CODE:
	int c = 3, d = 3.14, e;

	//Declare int variables f and g, initializing them to 6 and 7 respectively and declare h
	//uninitialized to store the result.
	//CODE:
	int f = 5, g = 7, h;

	//Call addTogether() template with arguments x and y and ASSIGN the result to z.
	//CODE:
	z = addTogether(x, y);

	//Call addTogether() template with double arguments c and d. Assign the result to e.
	//CODE:
	e = addTogether(c, d);

	//Call addTogether() template with double arguments f and g. Assign the result to h.
	//CODE:
	h = addTogether(f, g);

	cout << "Here we add two doubles together using template\n\n";
	//Use cout statement to print z to screen.
	//CODE:
	cout << z << endl;

	cout << "-----------------------------------------\n";
	cout << "Adding two ints(note:3.14 was truncated to 3 at declaration(int), so the \n";
	cout << "the template resolves to the int version):\n";
	//Output e to screen.
	//CODE:
	cout << e << endl;

	cout << "--------------------------------------------------------\n";
	cout << "Here we add two whole numbers/int together and it uses the template in the same\n";
	cout << "way as when we add two doubles (decimals together):\n" << endl;
	//Output f to screen,
	//CODE:
	cout << h << endl;

}