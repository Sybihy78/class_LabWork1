#include"Square.h"


Square::Square(const double userA) :
	a(userA)
{ }
Square::Square(const double userA, const double userB) :
	a(userA),
	b(userB)
{ }

double Square::getA() const {
	return a;
}
double Square::getB() const {
	return b;
}
double Square::getS() const {
	return a * a;
}
double Square::getSS() const {
	return a * b;
}
void Square::setA(double userA) {
	a = userA;
}
void Square::setB(double userB) {
	b = userB;
}

Square::~Square()
{
}
