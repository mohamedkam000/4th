/*
 * Name      :  Mohammed Kamal Aldeen Othman
 * Class     :  2nd Class
 * Department:  Computer Engineering
*/

#include <iostream>
#include <cmath>
#include <cstring>
// including input/output library for user input and preview
using namespace std;
// this line litreally sets us free from writing std:: each time
// for input/output operations
class Shape {
// creating object constructor defined by the programmer to be used in
// the program
	public:
// a class member that is available from any function
		virtual float getArea() = 0;
// virtual is a member class that forces the compiler to pick the
// method implementation defined in the object's class
		void setWidth(float w) {
			width = w;
		}
// void specifies that the function doesn't return a value
// to be noted, void can point to a function, but not to a class member
		void setHeight(float h) {
			height = h;
		}
		void setRadius(float r) {
			radius = r;
		}
		void setApothem(float a) {
			apothem = a;
		}
// for the set codes, we're defining variables to be used in later
// calculations
		void setMajor(float m) {
			major = m;
		}
		void setMinor(float n) {
			minor = n;
		}
	protected:
// members of this class are not accessible outside of this code, but
// accessible from any class of the code
		float width;
		float height;
		float radius;
		float apothem;
		float major;
		float minor;
// float is a defenition of fractions, close to double in the next line
		double const pi = 3.14159;
// double is sort of a definition for fractions, and const is for
// defining pi as a non-changing constant
};
class Circumference {
// creating a class for another output, since I still don't know how
// to combine two outputs in one class, and whatsoever I've tried
// so far went failure, pardon me.
	public:
		virtual float getCircumference() = 0;
		
		void setWid(float wi) {
			wid = wi;
		}
// void specifies that the function doesn't return a value
// to be noted, void can point to a function, but not to a class member
		void setLength(float l) {
			length = l;
		}
		void setRadi(float ra) {
			radi = ra;
		}
		void setMaxi(float ma) {
			maxi = ma;
		}
		void setMini(float mi) {
			mini = mi;
		}
// same as line 68/69
		void setLength1(float l1) {
			length1 = l1;
		}
		void setLength2(float l2) {
			length2 = l2;
		}
		void setLength3(float l3) {
			length3 = l3;
		}
// these definitions are specified for the circumference of geometric
// shapes, of course some of them are available in another class, but
// with differrent definition names
	protected:
// same as line 45/46
		float wid;
		float length;
		float length1;
		float length2;
		float length3;
		float radi;
		float maxi;
		float mini;
// same as line 53
		double const pi = 3.14159;
// same as line 55/56
};
class Rectan: public Circumference {
	public:
		float getCircumference() { 
			return (2 * (length + wid));
		}
};
// pointing that these members are accessible from any function,
// applying to all members declared up to the end of class, or the
// next access specifier
class Ov: public Circumference {
	public:
		float getCircumference() { 
			return (2 * pi * sqrt((maxi * maxi) + (mini * mini)) * 0.5);
		}
};
class Squa: public Circumference {
	public:
		float getCircumference() { 
			return (length * 4);
		}
};
class Cir: public Circumference {
	public:
		float getCircumference() { 
			return (2 * pi * radi);
		}
};
// same as line 115/116/117
class Pol: public Circumference {
	public:
		float getCircumference() { 
			return (5 * length);
		}
};
class Ellip: public Circumference {
	public:
		float getCircumference() { 
			return (2 * pi * sqrt((maxi * maxi) + (mini * mini)) * 0.5);
		}
};
class Trian: public Circumference {
	public:
		float getCircumference() { 
			return (length1 + length2 + length3);
		}
};
// same as line 115/116/117
class Rectangle: public Shape {
// object constructor with public availability so it is accessible
// from any function
	public:
		float getArea() { 
			return (width * height);
		}
};
class Triangle: public Shape {
	public:
		float getArea() { 
			return (width * height)/2;
		}
};
// same as line 157/158
class Square: public Shape {
	public:
		float getArea() { 
			return (height * height);
		}
};
// same as line 170
class Circle: public Shape {
	public:
		float getArea() { 
			return (pi * radius * radius);
		}
};
// same as line 177
class Polygon: public Shape {
	public:
		float getArea() { 
			return (0.5 * apothem * height * 5);
		}
};
// same as line 184
class Ellipse: public Shape {
	public:
		float getArea() { 
			return (pi * major * minor);
		}
};
// same as line 191
class Oval: public Shape {
	public:
		float getArea() { 
			return (pi * major * minor);
		}
};
char pref[50];
// this definition is specified for storing user inputs, with maximum
// capacity of 50 charachters
float length, length1, length2, length3, mini, maxi, major, minor, wid, circum, are, radi, apothem;
// same as line 105
double const pi = 3.14159;
// same as line 107
int main(void){
// the same as int main(), but the second definition with void
// is considered technically better as it clearly specifies that
//  main can only be called without any parameter
loop:
// loop statement to allow multiple (infinite) execution of a block code
// until a particular condition is satisfied, then it breaks
	Rectangle Rect;
	Triangle Tri;
	Square Sqr;
	Circle Circ;
	Polygon Poly;
	Ellipse Elli;
	Oval Ova;
	Rectan R;
	Trian T;
	Squa S;
	Cir C;
	Pol P;
	Ellip E;
	Ov O;
// saving class member into a variable so it can be called for later
// result viewing
	cout << "Supported Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse, Oval" << endl;
	cout << "\nTo Quit, type Q\n";
	cout << "\nEnter Your prefered shape: ";
	cin >> pref;
	if (strcmp(pref, "Triangle") == 0){
// using if condition along with strcmp to compare strings of a given
// and inserted one's, strcmp is summoned via cstring library
		cout << "\nEnter Triangle's base length: ";
		cin >> wid;
		cout << "Enter Triangle's height length: ";
		cin >> length;
		cout << "Enter the first side Triangle's length: ";
		cin >> length1;
		cout << "Enter the sencond side Triangle's length: ";
		cin >> length2;
		cout << "Enter the third side Triangle's length: ";
		cin >> length3;
// of course these i/o lines are pretty obvious, as it stores user input
// so it can be used in a later code
		are = wid * length;
		circum = (length1 + length2 + length3);
	}
// simple calculations using the help of the inserted values to create
// a working formula in order to generate the results
	else if (strcmp(pref, "Rectangle") == 0){
		cout << "\nEnter Rectangle's width value: ";
		cin >> wid;
		cout << "Enter Rectangle's height value: ";
		cin >> length;
		are = wid * length;
		circum = 2 * (length + wid);
	}
// same as line 251/252/256/257
// else if function drives the code to the next condition in case the
// first one did not satisfy
	else if (strcmp(pref, "Square") == 0){
		cout << "\nEnter side Square's length value: ";
		cin >> length;
		are = length * length;
		circum = 4 * length;
// same as line 266
	}
	else if (strcmp(pref, "Circle") == 0){
		cout << "\nEnter Circle's radius value: ";
		cin >> radi;
		are = pi * radi * radi;
		circum = 2 * pi * radi;
// same as line 274
	}
	else if (strcmp(pref, "Polygon") == 0){
		cout << "\nEnter Polygon's apothem value: ";
		cin >> apothem;
		cout << "Enter Polygon's side length value: ";
		cin >> length;
		are = 0.5 * apothem * 5 * length;
		circum = length * 5;
// same as line 281
	}
	else if (strcmp(pref, "Ellipse") == 0){
		double maj,min;
// double has been defined as a supporter for fraction inputs and outputs
// and appearently it can't be universally defined
		cout << "\nEnter Ellipse's Major Axis value: ";
		cin >> maj;
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min;
		are = pi * maj * min;
		circum = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
// same as line 290
	}
	else if (strcmp(pref, "Oval") == 0){
		double maj,min;
// same as line 294/295
		cout << "\nEnter Oval's Major Axis value: ";
		cin >> maj;
		cout << "Enter Oval's Minor Axis value: ";
		cin >> min;
		are = pi * maj * min;
// since an Oval is actually an Ellipse, it can be solved approximately
// with the same equation, making it sort of a duplicated shape
		circum = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
	}
// same as line 302
	else if (strcmp(pref, "Q") == 0){
		return 0;
	}
// typing Q will exit program
	else {
		cout << "\nWrong choice, choose again ...\n";
		cout << "\n------------------------------------------------------------\n" << endl;
		goto loop;
// repeat the iterative loop after failure to satisfy the condition
	}
// input storages
	Tri.setWidth(wid);
	Tri.setHeight(length);
	T.setLength1(length1);
	T.setLength2(length2);
	T.setLength3(length3);
// these codes here are storing user input data, and processing them
// to work with the already inserted formulas
	Sqr.setHeight(length);
	S.setLength(length);
// since you've reached this far, of course you're smart enough
// to understand this code, therefore no need for silly explanations
	Circ.setRadius(radi);
	C.setRadi(radi);
// same as line 329/330/333/334
	Poly.setApothem(apothem);
	Poly.setHeight(length);
	P.setLength(length);
// same as line 337
	Elli.setMajor(major);
	Elli.setMinor(minor);
	E.setMini(mini);
	E.setMaxi(maxi);
// same as line 341
	Ova.setMajor(major);
	Ova.setMinor(minor);
	O.setMaxi(maxi);
	O.setMini(mini);
// same as line 346
	cout << "\n" << pref << "'s " << "Area is: " << are << endl;
	cout << pref << "'s " << "Circumference is: " << circum << endl;
// this part has been specificlly placed here for viewing the result,
// after ensuring that the enteries are correct, 
	return 0;
// for the code to reach this line, it means it has been successfully
// executed and therefore, it will terminate
}
