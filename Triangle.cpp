#include "Triangle.h"
#include <cmath>

Triangle::Triangle(const float user_a, const float user_h) {
	a = user_a;
	h = user_h;
}

Triangle::Triangle(const float user_b, const float user_c, const double user_angle) {
	b = user_b;
	c = user_c;
	angle = user_angle;
}

Triangle::Triangle(const float user_a, const float user_b, const float user_c) {
	a= user_a;
	b = user_b;
	c = user_c;
}

Triangle::~Triangle()
{
}

float Triangle::getA() const {
	return a;
}
void Triangle::setA(const float user_a) {
	a = user_a;
}
float Triangle::getB() const {
	return b;
}
void Triangle::setB(const float user_b) {
	b = user_b;
}
float Triangle::getC() const {
	return c;
}
void Triangle::setC(const float user_c) {
	c = user_c;
}
float Triangle::getH() const {
	return h;
}
void Triangle::setH(const float user_h) {
	h = user_h;
}
double Triangle::getAngle() const {
	return angle;
}
void Triangle::setAngle(const double user_angle) {
	angle = user_angle;
}

double Triangle::area_from_a_h() const {
	return a * h / 2;
}

double Triangle::area_from_a_b_angle() const {
	return b * c * sin(angle) / 2;
}

double Triangle::semiPerimetr() const {
	return (a + b + c) / 2;
}

double Triangle::area_from_a_b_c() const {
	return sqrt(semiPerimetr() * (semiPerimetr() - a) * (semiPerimetr() - b) * (semiPerimetr() - c));
}

