#include<iostream>
#include <vector>
using namespace std;


//Vectors are dynamic arrays in that they don't have to be a fixed/static number of elements. 

int main() {

	//Even when you declare a size you can still manipulate (add, take, insert, erase,ect.) it.
	//Create an empty vector while specifying size here. Here size is 5 elements with no value (hint).

	cout << "How empty vectors work - use a for loop and cout the vector to the screen. Should be 5 0 values." << endl;
	//Instantiate int vector object emptyVector with size (parameter since obj) 5. Each element is 
	//value-initialized to 0 by default. vector <data type>
	//CODE:

	//Output call with size() on emptyVector (object) to show number of elements to screen.
	//CODE:

//Demonstrate emptyVector with 5 elements initialized to 0 with for loop, int i initialized to 0, i < 
// emptyVector and size(). Iterate by 1 and output via iteration through each index location 
// and output elements to the screen.
	//CODE

	//Declare 5 vector arrays. A key point: We can operate on the same array multiple times manipulating 
	//it with different funcs and actions that will effect how many elements it has. It's size is dynamic. 
	//Can adjust number of elements/indexes 

	//Instantiate int vector happyVector containing 3 elements {} 4,5,6. Elements are type int -> vector class <type>
	//CODE:

//Instantiate a vector named happyVector2 that contains 3 elements 7,8,9. Elements are of type int. 
//-> at beginning vector class <int>
//CODE:

//Instantiate vector named happyVector3 that contains 3 elements 11, 12, 13. Elements are of type int 
//so must clarify that <int> at beginning
//CODE:

//**We do not use this array. Feel free to try to change the push_back() example to this vector 
//(happyVector3). To see what happens.

//Instantiate vector named happyVector4 that contains 3 elements 14, 15, 16. Elements are of type 
//int of the vector class <>
//CODE:

//Instantiate vector named happyVector5 that contains 3 elements 21, 22, 23. Elements 
//are of type int of vector <> class
//CODE:

	cout << "\n\nDemo of assigning an int object to a specific index within the vector. happyVector[2] is: " << endl;

	//Create an int variable vectorElm assign it to happyVector with a size of 2 (3 elements total)
	//Access element at index 2 from happyVector and store it in int vectorElem (assign int vector to....) []
	//CODE:

	//Add a cout statement to show vectorElm/happyVector[2] to screen. Will be a 6.
	//CODE:


	cout << "\n\nPrint full happyVector array to screen: " << endl;
	//Declare for loop that initializes i to 0, sets i to less than happyVector object called on 
	//function size(), increment by 1.There will be 3 total iterations the 1st prints 4 to screen, 
	//2nd iteration prints out 5 and 3rd iteration prints 6
	//Code block executes printing out contents of the happyVector on the SAME line through a cout statement and...
	//CODE:

	//This accesses happyVector "i" is just an index location placeholder as well as the element/value 
	//which will print to screen.
	//CODE:

	cout << "\n\nPrint with replacement value for happyVector 7,8,9 with 22 replacing the second element (index location 1)" << endl;

	cout << "Display happyVector2[1] then run a line that does the replacement. Current happyVector[1] is: " << endl;

	//Output to display happyVector2[1] OG to screen
	//CODE:

	//Replace an element/value by setting the index location you want (1 here) to change to a new value. Here use 22.
	//CODE:

	cout << "\nNow the the replacement happyVector[1] should be 22 if you did it right: " << endl;
	//CODE:

	cout << "Now to show how this replacement impacts the happyVector2 vector as a whole\n" << endl;

	//Declare for loop, int i set to 0, with i less than size of the vector happyVector2 .size with no parameters. Iterate i by one.
	//Output prints element at each index location to the screen with each on a NEW line.
	//CODE:

	cout << "\n\nPrint with push_back() function" << endl;

	//This demonstrates two things. First use push_back() to add value/index location array we are dealing with.
	//Secondly this shows we can operate/manipulate same vector (here happyVector2) however we wish. We dont need 
	//a "new" vector. That said it is operating AFTER the above manipulation. So it is NOT the exactly the original

	//Declare/call a push_back function with an argument of 10 on the happyVector2 object.
	//CODE:

	//Declare for loop with int i instantiated to 0 These are standard classes at the header. 
	//You're just saying what object i is equal to. Set i to be less than happyVector2 size (use . and size
	//function with no parameters. Then iterate i by one.
	//CODE:

	//Output value of the element at index i of the happyVector2 vector to the screen on SAME line.
	//CODE:

	//The pop_back() works in similar way but the difference is that it automatically eliminates last element in given array.
	//pop_back() takes place before the for loop runs and eliminates the value at the last location of vector.

	cout << "\n\nPop back function example for happyVector4" << endl;
	//Declare the pop_back() function with no parameters on the happyVector4 vector object.
	//CODE:

	//Declare for loop that starts i at 0, where i is less than the happyVector4 total size, iterate by 1.
	//CODE:

	//Output current index location of the happyVector4 vector element on DIFFERENT lines.
	//CODE:

	cout << "\nPrint with erase function\n" << endl;

	//Eliminate 2nd position in array (22) Declare an erase() (vector . function) for 
	//happyVector5 vector calling arguments -> vector begin(happyVectorInQuestion). Add 1 since we are going to
	//erase the element at the second index location on the happyVector5 vector.
	//CODE:
	
	
	//Declare a for loop to print happyVector5 to the screen exactly as you did the others to show the adjustment after the erase 
	//(22 - 2nd element) should be gone. Output the new vector to the screen on the SAME line.
	//CODE:

	cout << "\n\nPrint with insert function" << endl;

	//Declare insert() with arguments -> vectorInQuestion, dot separator, begin() function with no parameters, +1 (move one  off 0 index), 
	//insert 33 into the on the happyVector5 vector/object
	//CODE:

	//Declare for loop setting int object i = to 0, i<happyVector.size(), iterate i by 2 with output that iterates[i] over index locations 
	//of the vectors elements prints the array on the SAME line. If you iterate by 2 you skip 33. So try i++ as well.
	//CODE:


	cout << "\n\nOr using the range based loop method. " << endl;

	//Declare range-base for loop that iterates through each int element for happyVector. 
	//The loop variable int curElm is automatically assigned the value of 
	//each element on every iteration int curElm : given vector
	//CODE:

}