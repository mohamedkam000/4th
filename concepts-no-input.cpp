/*
 * Name      :  Mohammed Kamal Aldeen Othman
 * Class     :  2nd Class
 * Department:  Computer Engineering
*/

#include <iostream>
#include <cmath>
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
// method implemention defined in the object's class
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
// same as line 44/45
		float wid;
		float length;
		float length1;
		float length2;
		float length3;
		float radi;
		float maxi;
		float mini;
// same as line 52
		double const pi = 3.14159;
// same as line 54/55
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
			return (2 * pi * sqrt((maj * maj) + (min * min)) * 0.5);
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
			return (2 * pi * rad);
		}
};
class Pol: public Circumference {
	public:
		float getCircumference() { 
			return (5 * length);
		}
};
class Ellip: public Circumference {
	public:
		float getCircumference() { 
			return (2 * pi * sqrt((maj * maj) + (min * min)) * 0.5);
		}
};
class Trian: public Circumference {
	public:
		float getCircumference() { 
			return (length1 + length2 + length3);
		}
};
// same as line 113/114/115
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
// same as line 154
class Square: public Shape {
	public:
		float getArea() { 
			return (height * height);
		}
};
// same as line 167
class Circle: public Shape {
	public:
		float getArea() { 
			return (pi * radius * radius);
		}
};
// same as line 174
class Polygon: public Shape {
	public:
		float getArea() { 
			return (0.5 * apothem * height * 5);
		}
};
// same as line 181
class Ellipse: public Shape {
	public:
		float getArea() { 
			return (pi * major * minor);
		}
};
// same as line 188
class Oval: public Shape {
	public:
		float getArea() { 
			return (pi * major * minor);
		}
};
// same as line 195
int main(void){
// the same as int main(), but the second definition with void
// is considered technically better as it clearly specifies that
//  main can only be called without any parameter
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
	Rect.setWidth(4);
	Rect.setHeight(8);
	R.setWid(4);
	R.setLength(6);
	cout << "Total Rectangle area: " << Rect.getArea() << endl;
	cout << "Total Rectangle circumference: " << R.getCircumference() << endl;
// inserting a known value for our variable, so that it can be
// calculated and viewed as a result, without modification support
	Tri.setWidth(4);
	Tri.setHeight(8);
	T.setLength1(5);
	T.setLength2(8);
	T.setLength3(12);
	cout << "Total Triangle area: " << Tri.getArea() << endl; 
	cout << "Total Triangle circumference: " << T.getCircumference() << endl; 
// same as line 229/230
	Sqr.setHeight(4);
	S.setLength(6);
	cout << "Total Square area: " << Sqr.getArea() << endl;
	cout << "Total Triangle circumference: " << S.getCircumference() << endl; 
// same as line 238
	Circ.setRadius(6);
	C.setRadi(5);
	cout << "Total Circle area: " << Circ.getArea() << endl;
	cout << "Total Triangle circumference: " << C.getCircumference() << endl; 
// same as line 243
	Poly.setApothem(8);
	Poly.setHeight(6);
	P.setLength(9);
	cout << "Total Polygon area: " << Poly.getArea() << endl;
	cout << "Total Triangle circumference: " << P.getCircumference() << endl; 
// same as line 248
	Elli.setMajor(12);
	Elli.setMinor(4);
	E.setMini(6);
	E.setMaxi(20);
	cout << "Total Ellipse area: " << Elli.getArea() << endl;
	cout << "Total Triangle circumference: " << E.getCircumference() << endl; 
// same as line 254
	Ova.setMajor(12);
	Ova.setMinor(4);
	O.setMaxi(17);
	O.setMini(5);
	cout << "Total Oval area: " << Ova.getArea() << endl;
	cout << "Total Triangle circumference: " << O.getCircumference() << endl; 
// same as line 261
	return 0;
// for the code to reach this line, it means it has been successfully
// executed and therefore, it will terminate
}
