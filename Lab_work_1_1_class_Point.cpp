#include <iostream>
#include <string>


class Point {
	double x = 0.0;
	double y = 0.0;
public:
	Point() = default;
	Point(const double userX, const double userY);
	
	double getX() const;
	double getY() const;
	void setX(double userX);
	void setY(double userY);
	void printPoint() const;
	
	~Point() = default; 
};

Point::Point(const double userX, const double userY) :
	x(userX),
	y(userY)
{ }

double Point::getX() const { 
	return x;
}
double Point::getY() const {
	return y;
}
void Point::setX(double userX) { 
	x = userX;
}
void Point::setY(double userY) {
	y = userY;
}
void Point::printPoint() const {
	std::cout << "(" << x << ";" << y << ")" << std::endl;
}


bool getResult(Point p1, Point p2) {
	if (p1.getX() == p2.getX() && p1.getY() == p2.getY()) {
		return true;
	}
	return false;
}


Point getPoint() {
	std::cout << "Enter x - coordinate for point" << std::endl;
	double px = 0.0;
	std::cin >> px;
	std::cout << "Enter y - coordinate for point" << std::endl;
	double py = 0.0;
	std::cin >> py;

	Point point;
	
	point.setX(px);
	point.setY(py);

	std::cout << "Point: ";
	point.printPoint();

	return point;
}

int main() {

	Point point1 = getPoint();
	Point point2 = getPoint();
		
	if (getResult(point1, point2) == true) {
		std::cout << "Points are coincide" << std::endl;
	}
	else {
		std::cout << "Points aren't coincide" << std::endl;
	}
	
	system("pause");
	return 0;
}