#include "Functions.h"

//Funkcja zwraca pole kwadratu
int squareArea(int value)
{
	return value * value;
}

//Funkcja zwraca kwadrat liczby
int square(int value)
{
	return value * value;
}

//Funkcja zwraca szeœcian liczby
int cube(int value)
{
	return value * value * value;
}

//Funkcja zwraca pole prostok¹ta
int rectangleArea(int a, int b)
{
	return a * b;
}

//Funkcja zwraca mniejsz¹ z liczb
int smaller(int a, int b)
{
	return a < b ? a : b;
}

//Funkcja zwraca wiêksz¹ z liczb
int bigger(int a, int b)
{
	return a > b ? a : b;
}

//Funkcja zwraca iloczyn trzech liczb
int product3(int a, int b, int c)
{
	return a * b * c;
}

//Funkcja zwraca prawdê, gdy liczby s¹ równe
bool same(int a, int b)
{
	return a == b;
}

//Funkcja zwraca prawdê, jeœli suma liczb jest dodatnia, w przeciwnym wypadku zwraca fa³sz
bool isSumEven(int a, int b, int c)
{
	return !((a + b + c) % 2);
}

//Funkcja zwraca pole trójk¹ta
int triangleArea(int a, int h)
{
	return a * h / 2;
}

//Funkcja zwraca iloœæ elementów dodatnich
int positive(int tab[], int size)
{
	int p = 0;
	for (int i = 0; i < size; i++)
		if (tab[i] > 0)
			p++;
	return p;
}

//Funkcja zwraca iloœæ elementów ujemnych
int negative(int tab[], int size)
{
	int n = 0;
	for (int i = 0; i < size; i++)
		if (tab[i] < 0)
			n++;
	return n;
}

//Funkcja zwraca sumê wszystkich elementów tablicy
int tabSum(int tab[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += tab[i];
	return sum;
}

//Funkcja zwraca œredni¹ arytmetyczn¹ wszystkich elementów tablicy
float average(int tab[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += tab[i];
	return sum / (float) size;
}

//Funkcja zamienia elementy dodatnie na ujemne i ujemne na dodatnie
void flipSign(float tab[], int size)
{
	for (int i = 0; i < size; i++)
	{
		tab[size] *= -1.0f;
	}
}

//Funkcja zwraca prawdê jeœli parametr jest parzysty lub fa³sz jeœli jest nieparzysty
bool isEven(int value)
{
	return !(value % 2);
}

//Funkcja zwiêksza ka¿dy element tablicy o dowoln¹ wartoœæ ca³kowit¹
void increase(int tab[], int size, int value)
{
	for (int i = 0; i < size; i++)
		tab[i] += value;
}

//Funkcja mno¿y ka¿dy element tablicy o dowoln¹ wartoœæ ca³kowit¹
void multiply(int tab[], int size, int value)
{
	for (int i = 0; i < size; i++)
		tab[i] *= value;
}

//Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest o 5 wiêkszy od poprzedniego
void greater5(int tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] + 5;
}

//Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest dwa razy wiêkszy od poprzedniego
void twoTimesGreater(int tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] * 2;
}

//Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest dwa razy mniejszy od poprzedniego
void twoTimesLesser(float tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] / 2;
}
