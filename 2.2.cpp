#include <string.h>
#include <iostream>
#include <algorithm>

int main()
{
	std::string phrase;

	phrase = "Hola buenos dias34-?";
	std::reverse(phrase.begin(), phrase.end());
	std::cout << phrase << std::endl;
}