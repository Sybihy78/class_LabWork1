#pragma once

class Square
{
	double a = 0.0;
	double b = 0.0;
public:
	Square() = default;
	Square(const double userA);
	Square(const double userA, const double userB);

	double getA() const;
	double getB() const;
	double getS() const;
	double getSS() const;
	void setA(double userA);
	void setB(double userB);
	void printSquare() const;
	virtual ~Square();
};

