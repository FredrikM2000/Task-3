#include <iostream>

int age;

int main(){
	std::cout << "How old are you? ";
	std::cin >> age;

	if (age < 20) {
		std::cout << "You are young";
	}
	if (age >= 20 && age <= 40) {
		std::cout << "You are grown up";
	}
	if (age >= 41 && age <= 59) {
		std::cout << "You are old";
	}
	if (age == 60) {
		std::cout << "No comment";//The task said nothing about people who are exactly 60, so i just made up something myself
	}
	if (age > 60) {
		std::cout << "You ARE really old";
	}
}