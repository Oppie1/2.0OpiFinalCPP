#include<iostream>
#include<string> 
using namespace std;


//s1,s2,s3,s4 with dot "." separator because these are OBJECTS!

int main() {


	//Declare string var named s1 initialized to sentence.
	//CODE:

	//Use for loop with i counter, length() called on object s1, increment 1 output that sentence.
	//CODE:

	//Use the at() with s1 object and loop counter as its argument on one line.
	//CODE:

	cout << "\nPull a letter from that sentence using the at() function: " << endl;
	//Use at() to pull out the letter w from the s1 string/sentence and use cout to print to screen.
	//CODE:

	cout << "\n---getline example---" << endl;

	//Declare an uninitialized string variable named x.
	//CODE:

	cout << "\nPlease enter a short sentence:" << endl;

	//Use the getline(,) function to "cin" the data from "x"
	//CODE:

	cout << "\nThe sentence you just wrote was:\n";

	//cout sentence x to the screen.
	//CODE:

	cout << "\n---------------------------------------------------------------------\n" << endl;
	cout << "\nSetting string variable to a word/sentences. Understand variable can be initialized like an \n";
	cout << "object because technically it is an object\n";

	//Declare string variable s2 with argument "hamster"
	//CODE:

	//Declare two more uninitialized string variables s3 and s4.
	//CODE:

	//Output s2 out to the screen.
	//CODE:

	cout << "\n---Setting string equal to another string (s2 or s3 here) directly and using the assign() function.\n";
	//Assign s3 to s2 directly.
	//CODE:

	//Assign s4 OBJECT using the assign() using the dot . separator.
	//CODE:

	cout << "\nShow that output to the screen: \n";
	//Output each variable s1, s2, s3.
	//CODE:
	
	cout << "\n---Example of NOT using getline() function and what happens when just cin is used---\n";

	//Declare uninitialized string variable named adam.
	//CODE:

	cout << "Enter a short sentence: \n";
	//Write cin statement using getline() to store sentence in string var Adam
	//CODE:

	//Output sentence stored in adam.
	//CODE:

}

//******WHENEVER YOU WANT TO READ IN ENTIRE LINE OF DATA USE "GETLINE()**********
//------------------------------------------
//string bucky;
//cin>> bucky;
//cout << "the string I entered is: " << bucky << endl;
//This will only read in one word not whole sentence

//**Whenever using cin to read data in whether its from the keyboard or a file the end of the input is determined
//by the first whitespace character it comes across. Use getline and a new line character endl or \n to
//output full sentence (tuna sandwiches are darn good example - whole sentence is seen to screen and when you
//press enter the full sentence is printed to the screen.