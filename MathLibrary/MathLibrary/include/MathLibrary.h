#pragma once

namespace MathLibrary
{
	const double PI = 3.1415;

	double GetCircleArea(double radius);

	class FractionNumber
	{
	private:
		int numerator;
		int denumerator;

	public:
		FractionNumber(int numerator, int denumerator);

		int Numerator() const { return numerator; }
		int Denumerator() const { return denumerator; }
	};

	template<typename T>
	T Sum(T first, T second);
}