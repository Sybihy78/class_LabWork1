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

	std::cout << "What do you want to enter:" << std::endl;
	std::cout << "1 - base and height;" << std::endl;
	std::cout << "2 - two sides and angle between them;" << std::endl;
	std::cout << "3 - three sides;" << std::endl;
	int choise = 0;
	std::cin >> choise;
	float side1 = 0.0;
	float side2 = 0.0;
	float side3 = 0.0;
	float height = 0.0;
	double angle = 0;

	switch (choise) {
	case 1:
		std::cout << "Enter base of the triangle" << std::endl;
		std::cin >> side1;
		std::cout << "Enter height of the triangle" << std::endl;
		std::cin >> height;
		if (side1 > 0 && height > 0) {
			std::cout << "Area of the triangle is equal " << getTriangleArea(side1, height) << std::endl;
		}
		else {
			std::cout << "Error size! Please, try again." << std::endl;
		}
		break;

	case 2:
		std::cout << "Enter side 1 of the triangle" << std::endl;
		std::cin >> side2;
		std::cout << "Enter side 2 of the triangle" << std::endl;
		std::cin >> side3;
		std::cout << "Enter angle between this sides in radians" << std::endl;
		std::cin >> angle;
		if (side2 > 0 && side3 > 0 && angle > 0 && angle < 3.14) {
			std::cout << "Area of the triangle is equal " << getTriangleArea(side2, side3, angle) << std::endl;
		}
		else {
			std::cout << "Error size! Please, try again." << std::endl;
		}
		break;

	case 3:
		std::cout << "Enter side 1 of the triangle" << std::endl;
		std::cin >> side1;
		std::cout << "Enter side 2 of the triangle" << std::endl;
		std::cin >> side2;
		std::cout << "Enter side 3 of the triangle" << std::endl;
		std::cin >> side3;
		if (side1 > 0 && side2 > 0 && side3 > 0 && side1 < side2 + side3 &&
			side2 < side1 + side3 && side3 < side1 + side2) {
			std::cout << "Area of the triangle is equal " << getTriangleArea(side1, side2, side3) << std::endl;
		}
		else {
			std::cout << "Error size! Please, try again." << std::endl;
		}
		break;

	default:
		std::cout << "Error choise!" << std::endl;
	}

	system("pause");
	return 0;
}