#include "C3and5numbers.hpp"

C3and5numbers::C3and5numbers(const int count)
	: mSum(0)
{
	init(count);
}

C3and5numbers::~C3and5numbers()
{
}

bool C3and5numbers::check(const int key)
{
	bool res = false;

	if (mSet.end() != mSet.find(key))
	{
		res = true;
	}
	return res;
}

const int C3and5numbers::getSum() const
{
	return mSum;
}

void C3and5numbers::init(const int count)
{
	for (auto i = 0; i < count; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			mSet.insert(i);
			mSum += i;
		}
	}
}