#include <iostream>

int main()
{
	const int rozmiar = 7;
	int tablica[rozmiar] = { -1, 10, -102, 4, 6, 0, -1 };
	int a = 5;
	float b = 7.7f;
	
	std::cout << cube(a) << std::endl;
	// ...
	multiply(tablica, rozmiar, a);
	std::string temp = "";
    for(int i = 0; i < rozmiar; i++)
        temp += std::to_string(tablica[i]) + " ";
    std::cout << temp;
	// ...
	
	getchar();
	return 0;
}
