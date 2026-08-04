#include <iostream>
using namespace std;




//Declare/define int factorialFinder() with the parameter of int x
//code:

//Important: The if statement return value is to the factorialFinder(). Not to main. The if and else sit within the
//codeblock of the factorialFinder() -> Recall that functions and the codeblocks that lay within the function is like a mini
//program itself and so the if statement return value is returning to the function itself NOT to main.  The stacked factorialFinder
//functions that sit outside the else (and if) code block execute LIFO (last in first out).
//So x + 1 solves the factorialFinder 3 then 3 then 4.


	/*
	Each time the else condition runs  the return value sits here on the stack .
	Then we add on top of that case which waits outside the else block but within the factorialFinder(int x)
	execution context on the call stack.

	factorialFinder(1) = 
	1

	factorialFinder(2) =
	2*factorialFinder(2-1) -> 2*factorialFinder(1) -> 2 * 1 = 2

	factorialFinder(3) =
	3*factorialFinder(3-1) -> 3*factorialFinder(2) -> 3 * 2 = 6

	------START HERE AND STACK ON THIS______ LIFO!
	factorialFinder(4) =
	4*factorialFinder(4-1) -> 4*factorialFinder(3) -> 4 * 6 = 24

	*/




int main()
{

//Output statement that says "factorial of 4 is" with the function call.
//CODE:
	

}