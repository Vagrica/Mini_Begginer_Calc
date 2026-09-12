#include <iostream>

float getInput() {
	float input{};
	std::cout << "Enter number: ";
	std::cin >> input;
	return input;
}

int main() {
	std::cout << "WELCOME TO MY MINI INFINITE CALCULATOR!!! \n";
	float answer{ 0 };

	//FOR FIRST CALCULATION
	float x{ getInput() };
	std::cout << "Enter Your Operation (+,-,*,/): ";
	char operation{};
	std::cin >> operation;
	float y{ getInput() };

	while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
		std::cout << "Invalid operation entered!!!, TRY AGAIN!: ";
		std::cin >> operation;
	}

	if (operation == '+') {
		std::cout << x << " + " << y << " = " << (x + y) << '\n';
		answer += (x + y);
	}

	else if (operation == '-') {
		std::cout << x << " - " << y << " = " << (x - y) << '\n';
		answer += (x - y);
	}

	else if (operation == '*') {
		std::cout << x << " * " << y << " = " << (x * y) << '\n';
		answer += (x * y);
	}

	else {
		while (y == 0) {
			std::cout << "Cannot divide by zero! Choose to divide by something else!: ";
			std::cin >> y;
		}
		std::cout << x << " / " << y << " = " << (x / y) << '\n';
		answer += (x / y);
	}
	std::cout << "Answer: " << answer << '\n' << '\n';
	//FOR FIRST CALCULATION

	//IF THE USER WANTS TO CALCULATE MORE
	while (true) {
		std::cout << "Enter Your Operation (+,-,*,/): ";
		char operation{};
		std::cin >> operation;
		float x{ getInput() };

		while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
			std::cout << "Invalid operation entered!!!, TRY AGAIN!: ";
			std::cin >> operation;
		}

		if (operation == '+') {
			std::cout << answer << " + " << x << " = " << (answer + x) << '\n';
			answer += x;
		}

		else if (operation == '-') {
			std::cout << answer << " - " << x << " = " << (answer - x) << '\n';
			answer -= x;
		}

		else if (operation == '*') {
			std::cout << answer << " * " << x << " = " << (answer * x) << '\n';
			answer *= x;
		}

		else {
			while (x == 0) {
				std::cout << "Cannot divide by zero! Choose to divide by something else!: ";
				std::cin >> x;
			}
			std::cout << answer << " / " << x << " = " << (answer / x) << '\n';
			answer /= x;
		}
		std::cout << "Answer: " << answer << '\n' << '\n';
	}
	//IF THE USER WANTS TO CALCULATE MORE
	
	return 0;
}
