#include <iostream>
int main()
{
	int x;
	int z = 1;
	
	std::cout << "Input x" << std::endl;
	std::cin >> x;


	while (z <= x & x > 0) {
				
		std::string y(z, '*');
		std::cout << y << std::endl;
		
		z = z + 1;
		


	}


}