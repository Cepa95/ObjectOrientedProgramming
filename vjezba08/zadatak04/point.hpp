#include <iostream>
#include <math.h>

using namespace std;


template<typename T>
class point
{
	T x;
	T y;

public:
	T get_x() const
	{
		return x;
	}
	T get_y() const
	{
		return y;
	}

	point()
	{
		x = 0;
		y = 0;
	}
	point(T x_dot, T y_dot)
	{
		x = x_dot;
		y = y_dot;

	}

	friend ostream& operator<<(ostream& os, const point& point_dot);


	float operator-(const point& distance)
	{
		float udaljenost;
		float x_udaljenost = abs(x - distance.x);
		float y_udaljenost = abs(y - distance.y);
		return udaljenost = sqrt(pow(x_udaljenost, 2) + pow(y_udaljenost, 2));
	}

};

template<typename T>
inline
ostream& operator<<(ostream& os,  point <T>& point_dot)
{
	os << point_dot.get_x() << ", " << point_dot.get_y();
	return os;
}



