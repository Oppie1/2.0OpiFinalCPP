#include <iostream>
#include <fstream>
using namespace std;


//IMPORTANT: After creating "main" source file also create a "Kanopi.txt" under the same name (source file).

int main() {

	cout << "---First example is of a file that opens correctly and therefore can be written to\n" << endl;

	//Instantiate object named adamFile with the parameter "Kanopi.txt" of the ofstream class
	//CODE:

	//Create if statement with condition whether adamFile is open using the is_open(). Call is_open()
	//on the adamFile object.
	//CODE:

	//Output letting user know the file has opened successfully.
	//CODE:

	//Then else statement if file did not open successfully and output stating that to user.
	//CODE:

	//Use Object (adamFile) to output to Kanopi.txt file (hint <<)
	//CODE:

	//Call close() on adamFile object.
	//CODE:

	cout << "\n\n---Example where file does not open and there for cannot be written to---\n\n" << endl;

	//Create object adamFile2 of ofstream class and make parameter that adds DOESNOTEXIT/ file extension to 
	//Kanopi2.txt file. File extension is like -> folderName/file. To work you'd have delete DoesNotExist/from parameter.
	//CODE:

	//Create if statement with condition of adamFile2 object that is open (use the is_open()) that
	//outputs that file opened successfully to the screen.
	//CODE:
	
	//Create else statement that executes when if statement is false 
	//didnt open correctly.
	//CODE:

	//Use adamFile object to write sentence when if statement were true (delete DoesNotExist/)
	//CODE
	
	//Call close() on adamFile2 object.
	//CODE:
	
}