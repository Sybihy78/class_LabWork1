#include <iostream>
#include"Square.h"

double getSquareArea(const double s1) {

	Square side;
	side.setA(s1);

	double area = side.getS();

	std::cout << "Square's area is equals: " << area << std::endl;

	return area;
}


double getSquareArea(const double s1, const double s2) {

	Square side;
	side.setA(s1);
	side.setB(s2);

	double area = side.getSS();
	std::cout << "Square's area is equals: " << area << std::endl;

	return area;
}


int main() {

	std::cout << "How much sides of square do you want to enter (1 or 2)?" << std::endl;
	int choise = 0;
	std::cin >> choise;
	double side1 = 0.0;
	double side2 = 0.0;

	switch (choise) {
	case 1:
		std::cout << "Enter size of square's side" << std::endl;
		std::cin >> side1;
		if (side1 > 0) {
			getSquareArea(side1);
		}
		else {
			std::cout << "Error size! Please, try again." << std::endl;
		}
		break;
	case 2:
		std::cout << "Enter size of first square's side" << std::endl;
		std::cin >> side1;
		std::cout << "Enter size of second square's side" << std::endl;
		std::cin >> side2;
		if (side1 > 0 && side1 == side2) {
			getSquareArea(side1, side2);
		}
		else {
			std::cout << "Error size! The sides must be equal!" << std::endl;
			std::cout << "Please, try again." << std::endl;
		}
		break;
	default:
		std::cout << "Error choise!" << std::endl;
	}

	system("pause");
	return 0;
}