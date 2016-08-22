#ifndef C3AND5NUMBERS_HPP
#define C3AND5NUMBERS_HPP

#include <unordered_set>
/* calculate sum of numbers which are dividing ebently to 3 or 5 from range "count"*/
class C3and5numbers
{
public:
	C3and5numbers(const int count);
	~C3and5numbers();

	bool check(const int key);
	const int getSum() const;

private:
	
	void init(const int count);
	
	std::unordered_set<unsigned int> mSet;
	int mSum;
};

#endif

