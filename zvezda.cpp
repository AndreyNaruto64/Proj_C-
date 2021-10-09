#include <iostream>

int main()
{
	int x;

	std::cout << "Input x" << std::endl;
	std::cin >> x;


	while (x > 0) {
				
		std::string y(x, '*');
		std::cout << y << std::endl;
		
		x = x - 1;
		


	}


}
