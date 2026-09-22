#include <iostream>
using namespace std;




//Declare template for the FIRST and SECOND class.
//CODE:
template <class FIRST , class SECOND >

//Declare smaller() that returns type FIRST, taking parameter a of FIRST and parameter b of type SECOND.
//CODE:
FIRST smaller(FIRST a, SECOND b) {

	return (a < b ? a : b);
}

//Make return statement that says a is less than b return a and else return b. Use ternary operator.
//CODE:


int main() {

	//Declare int x initialized to 89.
	//CODE:
	int x = 89;

	//Declare a double y and initialize it to 56.78.
	//CODE:
	double y = 56.78;

	//Output to screen function call smaller() with x and y as parameters
	//CODE:
	cout << smaller(x, y);

}