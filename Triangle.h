#pragma once


class Triangle
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float h = 0.0;
	double angle = 0.0;
public:
	
	Triangle(const float a, const float h);
	Triangle(const float b, const float c, const double angle);
	Triangle(const float a, const float b, const float c);
	
	float getA() const;
	void setA(const float user_a);

	float getB() const;
	void setB(const float user_b);

	float getC() const;
	void setC(const float user_c);

	float getH() const;
	void setH(const float user_h);

	double getAngle() const;
	void setAngle(const double user_angle);

	double area_from_a_h() const;
	double area_from_a_b_angle() const;
	double semiPerimetr() const;
	double area_from_a_b_c() const;

	virtual ~Triangle();
};

