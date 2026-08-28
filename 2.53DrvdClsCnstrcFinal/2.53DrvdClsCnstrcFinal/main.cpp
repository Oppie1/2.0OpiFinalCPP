#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;


int main() {


	cout << "I am a cout statement that is the first thing in 'main'\n" << endl;

	//Instantiate a class named nakai of the Son class.
	//CODE:

	cout << "In main I am the last bit of code that was written. HOWEVER, I run in between the constructor and destructors" << endl;
	cout << "of BOTH Son And Father. When you have destructors they are always the LAST thing to run then program ends.\n" << endl;

}