#include <iostream>

void sleep(float seconds) {
	clock_t startClock = clock();
	float secondsAhead = seconds * CLOCKS_PER_SEC;
	while (clock() < startClock + secondsAhead);
	return;
}

void clear() {
	system("cls");
}

int main()
{
	const std::string symbols[4] = {"+", "*", "-", "/"};
	int number_1, number_2;
	char operation;

	std::cout << "First number: ";
	std::cin >> number_1;

	std::cout << "Second number: ";
	std::cin >> number_2;

	std::cout << "Operation: ";
	std::cin >> operation;

	switch (operation) {

		case '+':
			clear();
			std::cout << "Result: " << number_1 + number_2;
			sleep(1);
			break;

		case '-':
			clear();
			std::cout << "Result: " << number_1 - number_2;
			sleep(1);
			break;

		case 'x':
			clear();
			std::cout << "Result: " << number_1 * number_2;
			sleep(1);
			break;

		case '/':

			std::cout << "Result: " << number_1 / number_2;
			sleep(1);
			break;

		default:
			std::cout << "Operation is not listed.";
			sleep(2);
			clear();
			std::cout << "List of available operations: \n\n";

			for (int i = 0; i < 4; i++) {
				std::cout << symbols[i] << "\n";
			}

			sleep(3);
			break;
	}

	return 0;
}
