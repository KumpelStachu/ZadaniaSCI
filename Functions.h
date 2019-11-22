#ifndef H_FUNCTIONS
#define H_FUNCTIONS

///
///Funkcja zwraca pole kwadratu
///
///@param value - bok kwadratu
///
int squareArea(int value);

///
///Funkcja zwraca kwadrat liczby
///
///@param value - liczba
///
int square(int value);

///
///Funkcja zwraca szeœcian liczby
///
///@param value - liczba
///
int cube(int value);

///
///Funkcja zwraca pole prostok¹ta
///
///@param a - pierwszy bok prostok¹ta
///
///@param b - drugi bok prostok¹ta
///
int rectangleArea(int a, int b);

///
///Funkcja zwraca mniejsz¹ z liczb
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
int smaller(int a, int b);

///
///Funkcja zwraca wiêksz¹ z liczb
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
int bigger(int a, int b);

///
///Funkcja zwraca iloczyn trzech liczb
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
///@param c - trzecia liczba
///
int product3(int a, int b, int c);

///
///Funkcja zwraca prawdê, gdy liczby s¹ równe
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
bool same(int a, int b);

///
///Funkcja zwraca prawdê, jeœli suma liczb jest dodatnia
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
///@param c - trzecia liczba
///
bool isSumEven(int a, int b, int c);

///
///Funkcja zwraca pole trójk¹ta
///
///@param a - podstawa trójk¹ta
///
///@param h - wysokoœæ trójk¹ta
///
int triangleArea(int a, int h);

///
///Funkcja zwraca iloœæ elementów dodatnich
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int positive(int tab[], int size);

///
///Funkcja zwraca iloœæ elementów ujemnych
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int negative(int tab[], int size);

///
///Funkcja zwraca sumê wszystkich elementów tablicy
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int tabSum(int tab[], int size);

///
///Funkcja zwraca œredni¹ arytmetyczn¹ wszystkich elementów tablicy
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
float average(int tab[], int size);

///
///Funkcja zamienia elementy dodatnie na ujemne i ujemne na dodatnie
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void flipSign(float tab[], int size);

///
///Funkcja zwraca prawdê jeœli parametr jest parzysty lub fa³sz jeœli jest nieparzysty
///
///@param value - liczba
///
bool isEven(int value);

///
///Funkcja zwiêksza ka¿dy element tablicy o dowoln¹ wartoœæ ca³kowit¹
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
///@param value - liczba, o któr¹ ka¿dy element tablicy zostanie zwiêkszony
///
void increase(int tab[], int size, int value);

///
///Funkcja mno¿y ka¿dy element tablicy o dowoln¹ wartoœæ ca³kowit¹
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
///@param value - liczba, o któr¹ ka¿dy element tablicy zostanie pomno¿ony
///
void multiply(int tab[], int size, int value);

///
///Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest o 5 wiêkszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void greater5(int tab[], int size);

///
///Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest dwa razy wiêkszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void twoTimesGreater(int tab[], int size);

///
///Funkcja modyfikuje elementy tablicy w taki sposób, ¿e ka¿dy kolejny element tablicy jest dwa razy mniejszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void twoTimesLesser(float tab[], int size);

#endif // !H_FUNCTIONS
