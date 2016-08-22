#include <iostream>
#include "C3and5numbers.hpp"


using namespace std;

int main()
{
	C3and5numbers numbs(10000);
	if (numbs.check(287)) std::cout << "FUCK!!!" << std::endl;
	
	cout << "Sum: "<< numbs.getSum();
	return 0;
}
