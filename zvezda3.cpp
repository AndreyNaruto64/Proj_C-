#include <iostream>

int main()
{
	int x;
	int z = 0;
	std::cout << "Input x" << std::endl;
	std::cin >> x;
	int m = x+1;


	while (z < m ) {
				
		x = x - 1;
		z = z + 1;
		std::string y(x, ' ');
		std::string n(z, '*');
		std::cout << y << n << std::endl;
	

	}


}
