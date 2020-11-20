/*
 * Name      :  Mohammed Kamal Aldeen Othman
 * Class     :  2nd Class
 * Department:  Computer Engineering
*/

#include <iostream>
// including input/output library for user input and preview
#include <cmath>
// including math library before heading towards the program
// perciesly we're using it here just for the square root function
#include <cstring>
// including cstring library so we're able to perform common string functions
using namespace std;
// this line litreally sets us free from writing std:: each time
// for input/output operations
char shape[50];
// giving a variable the definition of a charachter, along with it's
// maximum lenght allowed
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
// definition of float so we can deal with fractions
double const pi = 3.14159;
// double is sort of a definition for fractions, and const is for
// defining pi as a non-changing constant
int main()
// widely known, for it means our function needs to return some integer
// at the end of the execution, which we do it by returning 0 (mostly)
{
	loop:
// loop statement to allow multiple (infinite) execution of a block code
// until a particular condition is satisfied, then it breaks
	cout << "Supported Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse, Oval" << endl;
// initial informing output so the user is aware of what to do specificlly
	cout << "\nChoose your geometric shape: ";
// offering the user a choice point so he can satisfy his needs
	cin >> shape;
	if (strcmp(shape, "Triangle") == 0){
// using if condition along with strcmp to compare strings of a given
// and inserted one's, strcmp is summoned via cstring library
		cout << "\nYou have choosed Triangle!\n\n";
		cout << "Enter Triangle's base length: ";
		cin >> base;
		cout << "Enter Triangle's height length: ";
		cin >> height;
		cout << "Enter the first side Triangle's length: ";
		cin >> rib1;
		cout << "Enter the sencond side Triangle's length: ";
		cin >> rib2;
		cout << "Enter the third side Triangle's length: ";
		cin >> rib3;
// of course these i/o lines are pretty obvious, as it stores user input
// so it can be used in a later code
		area = 0.5 * base * height;
		circumference = rib1 + rib2 + rib3;
// simple calculations using the help of the inserted values to create
// a working formula in order to generate the results
	}
	else if (strcmp(shape, "Rectangle") == 0){
		cout << "\nYou have choosed Rectangle!\n\n";
		cout << "Enter Rectangle's width value: ";
		cin >> width;
		cout << "Enter Rectangle's height value: ";
		cin >> height;
		area = width * height;
		circumference = 2 * (height + width);
// same as line 55/56
// else if function drives the code to the next condition in case the
// first one did not satisfy
	}
	else if (strcmp(shape, "Square") == 0){
		cout << "\nYou have choosed Square!\n\n";
		cout << "Enter side Square's length value: ";
		cin >> length;
		area = length * length;
		circumference = 4 * length;
// same as line 66/67/68
	}
	else if (strcmp(shape, "Circle") == 0){
		cout << "\nYou have choosed Circle!\n\n";
		cout << "Enter Circle's radius value: ";
		cin >> radius;
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
// same as line 76
	}
	else if (strcmp(shape, "Polygon") == 0){
		cout << "\nYou have choosed Polygon!\n\n";
		cout << "Enter Polygon's apothem value: ";
		cin >> apothem;
		cout << "Enter Polygon's side length value: ";
		cin >> length;
		area = 0.5 * apothem * 5 * length;
		circumference = length * 5;
// same as line 84
	}
	else if (strcmp(shape, "Ellipse") == 0){
		double maj,min;
// double has been defined as a supporter for fraction inputs and outputs
// and appearently it can't be universally defined
		cout << "\nYou have choosed Ellipse!\n\n";
		cout << "Enter Ellipse's Major Axis value: ";
		cin >> maj;
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min;
		area = pi * maj * min;
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
// same as line 94
	}
	else if (strcmp(shape, "Oval") == 0){
		double maj,min;
// same as line 98/99/107
		cout << "\nYou have choosed Oval!\n\n";
		cout << "Enter Oval's Major Axis value: ";
		cin >> maj;
		cout << "Enter Oval's Minor Axis value: ";
		cin >> min;
		area = pi * maj * min;
// since an Oval is actually an Ellipse, it can be solved approximately
// with the same equation, making it sort of a duplicated shape
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);

/* 
 * to be noted, using square root is actually an application of Abstraction
 * as we only call sqrt() function available in cmath library, and pass
 * the numbers as arguments without knowing the underlying alogrithms
 * according to which the function is actually calculating square root
 * of numbers
 */
 
	}
	else {
		cout << "\nYou have chosen a non-existent Shape, reconsider your choice from the list above!\n";
		cout << "\n-----------------------------------------------------------\n" << endl;
		goto loop;
// repeat the iterative loop after failure to satisfy the condition
	}
	cout << "\n" << shape << "'s " << "Area is: " << area << endl;
	cout << shape << "'s " << "Circumference is: " << circumference << endl;
// this part has been specificlly placed here for viewing the result,
// after ensuring that the enteries are correct, 
	return 0;
// returning to the main() a success sign, getting it ready to terminate
}
