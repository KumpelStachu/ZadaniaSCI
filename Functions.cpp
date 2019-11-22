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

//Funkcja zwraca sze�cian liczby
int cube(int value)
{
	return value * value * value;
}

//Funkcja zwraca pole prostok�ta
int rectangleArea(int a, int b)
{
	return a * b;
}

//Funkcja zwraca mniejsz� z liczb
int smaller(int a, int b)
{
	return a < b ? a : b;
}

//Funkcja zwraca wi�ksz� z liczb
int bigger(int a, int b)
{
	return a > b ? a : b;
}

//Funkcja zwraca iloczyn trzech liczb
int product3(int a, int b, int c)
{
	return a * b * c;
}

//Funkcja zwraca prawd�, gdy liczby s� r�wne
bool same(int a, int b)
{
	return a == b;
}

//Funkcja zwraca prawd�, je�li suma liczb jest dodatnia, w przeciwnym wypadku zwraca fa�sz
bool isSumEven(int a, int b, int c)
{
	return !((a + b + c) % 2);
}

//Funkcja zwraca pole tr�jk�ta
int triangleArea(int a, int h)
{
	return a * h / 2;
}

//Funkcja zwraca ilo�� element�w dodatnich
int positive(int tab[], int size)
{
	int p = 0;
	for (int i = 0; i < size; i++)
		if (tab[i] > 0)
			p++;
	return p;
}

//Funkcja zwraca ilo�� element�w ujemnych
int negative(int tab[], int size)
{
	int n = 0;
	for (int i = 0; i < size; i++)
		if (tab[i] < 0)
			n++;
	return n;
}

//Funkcja zwraca sum� wszystkich element�w tablicy
int tabSum(int tab[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += tab[i];
	return sum;
}

//Funkcja zwraca �redni� arytmetyczn� wszystkich element�w tablicy
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

//Funkcja zwraca prawd� je�li parametr jest parzysty lub fa�sz je�li jest nieparzysty
bool isEven(int value)
{
	return !(value % 2);
}

//Funkcja zwi�ksza ka�dy element tablicy o dowoln� warto�� ca�kowit�
void increase(int tab[], int size, int value)
{
	for (int i = 0; i < size; i++)
		tab[i] += value;
}

//Funkcja mno�y ka�dy element tablicy o dowoln� warto�� ca�kowit�
void multiply(int tab[], int size, int value)
{
	for (int i = 0; i < size; i++)
		tab[i] *= value;
}

//Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest o 5 wi�kszy od poprzedniego
void greater5(int tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] + 5;
}

//Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest dwa razy wi�kszy od poprzedniego
void twoTimesGreater(int tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] * 2;
}

//Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest dwa razy mniejszy od poprzedniego
void twoTimesLesser(float tab[], int size)
{
	for (int i = 1; i < size; i++)
		tab[i] = tab[i - 1] / 2;
}
