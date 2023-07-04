#include <iostream>

class Calculator {
public:
	double num1;
	double num2;
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divided_1_2() {
		return num1 / num2;
	}
	double divided_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		return num1 != 0;
	}
	bool set_num2(double num2) {
		return num2 != 0;
	}
};
void print(Calculator calc) {
	std::cout << "num1 + num2 = " << calc.add() << std::endl;
	std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
	std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
	std::cout << "num1 / num2 = " << calc.divided_1_2() << std::endl;
	std::cout << "num2 / num1 = " << calc.divided_2_1() << std::endl;
}


int main() {
	setlocale(LC_ALL, "rus");
	double num1, num2;
	Calculator calc;
	while (1) {
		while (1) {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			if (calc.set_num1(num1)) {
				calc.num1 = num1;
				break;
			}
			else {
				std::cout << "Неверный ввод!\n";
				continue;
			}
		}
		while (1) {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (calc.set_num2(num2)) {
				calc.num2 = num2;
				break;
			}
			else {
				std::cout << "Неверный ввод!\n";
				continue;
			}
		}
		print(calc);
	}
	return 0;
}