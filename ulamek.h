#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ulamek{
private:
	int licznik, mianownik, id;
	static int cnt; //pole statyczne zwiazane z cala klasa, 
public:
	Ulamek();
	 //konstruktor, niczego nie zwraca, bezparametrowy, lista inicjalizacyjna




	Ulamek(int l, int m);
	//konstruktor agregujacy
		//inicjalizacja obiekut jest zgodna z koljenoscia umieszczzenia tych rzeczy w pamięci
	



	Ulamek(const Ulamek &other);
		 //konstruktor kopiujący, jako parametr dostaje referencje do innego ułamka, który ma skopiować, ma do			step do prywatnych obiektow, bo jest zdefiniowany w tej klasie
	
	~Ulamek();

	string toString()const;
						//const, bo nie zmienia obiektu;	
};
