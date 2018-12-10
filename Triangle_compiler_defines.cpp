#include <iostream>
#include <cmath>
#include"Triangle.h"


double getTriangleArea(const float base, const float height) {

	Triangle tr(base, height);
	double area = tr.area_from_a_h();
	return area;
}


double getTriangleArea(const float s1, const float s2, const double angl) {

	Triangle tr(s1, s2, angl);
	double area = tr.area_from_a_b_angle();
	return area;
}


double getTriangleArea(const float s1, const float s2, const float s3) {

	Triangle tr(s1, s2, s3);
	double area = tr.area_from_a_b_c();
	return area;
}


int main() {
	
	float side1 = 3.0;
	float side2 = 4.0;
	float side3 = 1.4;
	float height = 4.0;
	double angle = 1.4;
	
	std::cout << getTriangleArea(side1, height) << std::endl;
	std::cout << getTriangleArea(side1, side2, angle) << std::endl;
	std::cout << getTriangleArea(side1, side2, side3) << std::endl;
	
	system("pause");
	return 0;
}