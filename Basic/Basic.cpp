#include <iostream>

int main()
{
	int num = 0;
	int num2 = 0;
	std::cout << "write first number" << std::endl;
	std::cin >> num;
	std::cout << "write first second" << std::endl;
	std::cin >> num2;
	for (int i = num; i <= num2; ++i)
		std::cout << i << std::endl;
	return 0; 
}