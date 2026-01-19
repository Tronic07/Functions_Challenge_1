#include <iostream>
#include <cmath>
#include <limits>

const double Pi = 3.14159;

double calculateArea(const double radius) {
	return Pi * radius * radius;
}

double calculateArea(const double length, const double width) {
	return length * width;
}

double calculatePerimeter(const double radius) {
	return 2 * Pi * radius;
}

double calculatePerimeter(const double length, const double width) {
	return 2 * (length + width);
}

int main() {
	int choice;
	double radius, length, width;	

	do {
		std::cout << "Geometric Calculations: \n"
			<< "1. Area of a Circle\n"
			<< "2. Perimeter of a Circle\n"
			<< "3. Area of a Rectangle\n"
			<< "4. Perimeter of a Rectangle\n"
			<< "5. Quit\n";

		if (!(std::cin >> choice)) {
			std::cout << "Invalid input. Please enter a number.\n";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			continue;
		}

		switch (choice) {
			case 1:
				std::cout << "Enter radius: ";
				if (!(std::cin >> radius)) break;
				std::cout << "Area: " << calculateArea(radius) << "\n";
				break;
			case 2:
				std::cout << "Enter radius: ";
				if (!(std::cin >> radius)) break;
				std::cout << "Perimeter: " << calculatePerimeter(radius) << "\n";
				break;
			case 3:
				std::cout << "Enter length and width: ";
				if (!(std::cin >> length >> width)) break;
				std::cout << "Area: " << calculateArea(length, width) << "\n";
				break;
			case 4:
				std::cout << "Enter length and width: ";
				if (!(std::cin >> length >> width)) break;
				std::cout << "Perimeter: " << calculatePerimeter(length, width) << "\n";
				break;
			case 5:
				std::cout << "Exiting Program.\n";
				break;
			default:
				std::cout << "Invalid Choice. Please select from 1 to 5.\n";
		}

		if (std::cin.fail() && choice != 5) {
			std::cout << "Invalid numeric input. Please enter valid numbers.\n";
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}

	} while (choice != 5);

	return 0;
}