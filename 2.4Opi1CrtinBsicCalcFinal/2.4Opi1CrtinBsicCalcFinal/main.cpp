#include <iostream>
using namespace std;


//Demonstrates building basic calculator

int main()

{

	//Declare 3 uninitialized int variables a, b and sum.
	//CODE:
	int a;
	int b;
	int sum;

	//Output that notifies of a basic calculator. 
	//CODE:
	cout << "---This is a basic calculator!---" << endl;

	//Ask for a number. 
	//CODE:
	cout << "Enter a number: " << endl;

	//Input a
	//CODE:
	cin >> a;

	//Ask for another number. 
	//CODE:
	cout << "Please enter another number: " << endl;

	//Input b
	//CODE:
	cin >> b;

	//Assign sum var a result of a and b.
	//CODE:
	sum = a + b;

	//Output statement that explains operation shows sum to the screen. 
	//CODE:
	cout << sum << endl;

	return 0;

}
