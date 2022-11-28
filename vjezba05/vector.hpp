#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

namespace OOP {

	class Vec3
	{
		float x, y, z;
		float dot_product;

	public:

		Vec3();

		/*void vector_set(float x_axis, float y_axis, float z_axis);
		float get_x() const;
		float get_y() const;
		float get_z() const;*/
		float get_dot_product() const;

		//Vec3(Vec3& vector3d);
		friend istream& operator>>(istream& is, Vec3& vector3);
		friend ostream& operator<<(ostream& os, const Vec3& vector3);

		Vec3& operator= (const Vec3& vector3);

		Vec3 operator+ (const Vec3& vector3);
		Vec3 operator- (const Vec3& vector3);
		Vec3 operator* (const Vec3& vector3);
		Vec3 operator* (float num);
		Vec3 operator/ (const Vec3& vector3);
		Vec3 operator/ (float num);
		Vec3& operator+= (float number);
		Vec3& operator-= (float number);
		Vec3& operator*= (float number);
		Vec3& operator/= (float number);

		bool operator == (Vec3 vector3);
		bool operator != (Vec3 vector3);

		//float& operator[] (float num);
		float& operator[] (char c);

		Vec3 member(Vec3 vector3);
	};

	istream& operator>>(istream& is, Vec3& vector3);
	ostream& operator<<(ostream& os, const Vec3& vector3);
}

