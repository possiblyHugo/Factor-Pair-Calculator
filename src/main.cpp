#include <iostream>

int main() {
	int base_number = 0;

	std::cout << "Please input the base number: ";
	std::cin >> base_number;

	for (int i = 1, counter = 1; i <= (base_number / 2); i++, counter++) {
		if (base_number / i) {
			std::cout << "Factor Pair " << counter << ": [" << i << "," << base_number / i << "]\n";
		}
	}


	return 0;
}