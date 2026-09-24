#include <iostream>
#include <fstream>
using namespace std;

//Declare int func prototype "getWhatTheyWant()" with no parameters that will return user choice.
//CODE:

//Declare void func prototype displayItems() with int variable parameter to the screen.
//CODE:

int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;


	//Declare uninitialized int var whatTheyWant that will store selection.
	//CODE:

	//Assign whatTheyWant var to function call getWhatTheyWant() with no arguments.
	//CODE:

	//Create while loop  with condition whatTheyWant variable DOES NOT equal 4.
	//CODE:

	//Create nested switch statement with condition whatTheyWant as parameter.
	//CODE:

	//Create case 1: displayItems(arg) when user selects 1. And break statement preventing fall through.
	//CODE:

	//Create case 2 with displayItems(arg). Runs when user selects 2 and break preventing fall through.
	//CODE:

	//Create third case that uses displayItems() when user selects 3. Use break to prevent fall through
	//CODE:

	//Assign same whatTheyWant variable to getWhatTheyWant() call with no arguments. Within
	//while loop so will keep running until user selects 4 (sentinel control).
	//CODE:
}


//Define getWhatTheyWant(). Will have int var of choice. List displaying user choices 1,2 and 3 
//as well what they are (plain items, helpful items, harmful items. Then cin statement for users choice.
//The return choice whatever choice is made to function call getWhatTheyWant();
//CODE:

	//Add 3 cout statements displaying number/corresponding item types to screen (plain, helpful, harmful).
	//CODE:
	cout << "1 - Neutral Items" << endl;
	cout << "2 - Helpful Items" << endl;
	cout << "3 - Harmful Items" << endl;

	//Input user choice and store it in the local variable.
	//CODE:
	
	//Create a return that returns users choice to main.
	//CODE:

//Define void displayItems() function with an integer variable as parameter.
//CODE:

		//The "objectFile" is object with parameter (set equal to) Items.txt. 
		//Through that object we can access the name and power that is located in the file.

		//Instantiate object named objectFile of ifstream class with "items.txt" as its argument
		//CODE:

		//Declare uninitialized string var name that will store item names read from file.
		//CODE:

		//Declare uninitialized double variable named power that will store item power read from file.
		//CODE:

		//Use if statement with condition user selected 1 x==1. Then nested while loop that will read
		//name and power from objectFile. Within while loop with nested if condition if power from the 
		//file equals 0. Using if statement output info from file in proper formatting 
		//to match blank spaces in txt file.
		//CODE:

		//Create while loop nested in if condition taking info from txt file name/power and 
		//stores it in the object objectFile.
		//CODE:

		//Create if statement when power equals 0 in text file. Those items will print to screen.
		//CODE:

		//Output statement properly formatted with space in between to display name and power.
		//CODE:

		//Use if condition when user selects 2. Then nested while loop extracting data name and power from 
		//object objectFile. Then nested if statement in while loop taking data and test for items that 
		//have more than 0 power. Add output displaying properly formatted information to the screen.

			//Create if condition if the user (x) selects 2.
			//CODE:

			//Create nested while loop with condition retrieving name and power info from objectFile.
			//CODE:

			//Create a nested if statement to test if power isgreater than 0.
			//CODE:

			//From file prints name of the object and its power value to the screen. This
			//would be a positive item with 1 or greater power. Structure output statement
			//as you want data to be displayed to screen. Here we display a line of code with
			//a name, a space and power to screen

			//Output statement with proper formation to print information to the screen.
			//CODE:

			//Use if condition when user selects 3. And nested while loop with condition power and name data
			//from objectFile (Items.txt) bringing into program. Then if condition within while loop tests
			//items power is less than 0. Output formatted information to the screen.
			//CODE:

			//Use while loop that brings power and name data from objectFile into local vars.
			//CODE:

			//Create an if condition that will test of those items brought in how many are less than 0.
			//CODE:

			//Output statement that properly formats for name and power storage variables.
			//CODE: