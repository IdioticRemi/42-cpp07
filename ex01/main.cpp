#include "main.h"

void addFive(int &i) {
	i += 5;
}

void appendSomeShit(std::string &str) {
	str.append(" Momo");
}


int main( void ) {
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "========== BEFORE ==========" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;

	iter(tab, 10, &addFive);

	std::cout << "========== AFTER ==========" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	std::cout << "========== END ==========" << std::endl;

	std::string tab2[] = {"Coucou", "This is", "lolz"};

	std::cout << "========== BEFORE ==========" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;

	iter(tab2, 3, &appendSomeShit);

	std::cout << "========== AFTER ==========" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;
	std::cout << "========== END ==========" << std::endl;
}