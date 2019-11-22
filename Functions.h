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
///Funkcja zwraca sze�cian liczby
///
///@param value - liczba
///
int cube(int value);

///
///Funkcja zwraca pole prostok�ta
///
///@param a - pierwszy bok prostok�ta
///
///@param b - drugi bok prostok�ta
///
int rectangleArea(int a, int b);

///
///Funkcja zwraca mniejsz� z liczb
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
int smaller(int a, int b);

///
///Funkcja zwraca wi�ksz� z liczb
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
///Funkcja zwraca prawd�, gdy liczby s� r�wne
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
bool same(int a, int b);

///
///Funkcja zwraca prawd�, je�li suma liczb jest dodatnia
///
///@param a - pierwsza liczba
///
///@param b - druga liczba
///
///@param c - trzecia liczba
///
bool isSumEven(int a, int b, int c);

///
///Funkcja zwraca pole tr�jk�ta
///
///@param a - podstawa tr�jk�ta
///
///@param h - wysoko�� tr�jk�ta
///
int triangleArea(int a, int h);

///
///Funkcja zwraca ilo�� element�w dodatnich
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int positive(int tab[], int size);

///
///Funkcja zwraca ilo�� element�w ujemnych
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int negative(int tab[], int size);

///
///Funkcja zwraca sum� wszystkich element�w tablicy
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
int tabSum(int tab[], int size);

///
///Funkcja zwraca �redni� arytmetyczn� wszystkich element�w tablicy
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
///Funkcja zwraca prawd� je�li parametr jest parzysty lub fa�sz je�li jest nieparzysty
///
///@param value - liczba
///
bool isEven(int value);

///
///Funkcja zwi�ksza ka�dy element tablicy o dowoln� warto�� ca�kowit�
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
///@param value - liczba, o kt�r� ka�dy element tablicy zostanie zwi�kszony
///
void increase(int tab[], int size, int value);

///
///Funkcja mno�y ka�dy element tablicy o dowoln� warto�� ca�kowit�
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
///@param value - liczba, o kt�r� ka�dy element tablicy zostanie pomno�ony
///
void multiply(int tab[], int size, int value);

///
///Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest o 5 wi�kszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void greater5(int tab[], int size);

///
///Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest dwa razy wi�kszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void twoTimesGreater(int tab[], int size);

///
///Funkcja modyfikuje elementy tablicy w taki spos�b, �e ka�dy kolejny element tablicy jest dwa razy mniejszy od poprzedniego
///
///@param tab - tablica
///
///@param size - rozmiar tablicy
///
void twoTimesLesser(float tab[], int size);

#endif // !H_FUNCTIONS
