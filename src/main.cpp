#include <iostream>

int main() {
	int base_number = 0;

	std::cout << "Please input the base number: ";
	std::cin >> base_number;

	for (int i = 1, counter = 1; i <= (base_number / 2); i++) { // The loop goes until base_number / 2 because that's the max amount that a factor can be besides being itself. 
		if (base_number % i == 0 && (base_number / i) >= i) { // The (basenumber / i) >= i makes sure that no duplicates are in place such as [1,2] and [2, 1]. 
			std::cout << "Factor Pair " << counter << ": [" << i << "," << base_number / i << "]\n";
			counter++;
		}
	}

	return 0;
}