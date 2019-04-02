#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ulamek{
private:
	int licznik, mianownik, id;
	static int cnt; //pole statyczne zwiazane z cala klasa, 
public:
	Ulamek(): licznik(0), mianownik(1), id(++cnt){
		cout<<"Ulamek(): "<<id<<endl;
	}
	 //konstruktor, niczego nie zwraca, bezparametrowy, lista inicjalizacyjna




	Ulamek(int l, int m): licznik(l), mianownik(m), id(++cnt){
		cout<<"Ulamek(int,int): "<<id<<endl;
	} //konstruktor agregujacy
		//inicjalizacja obiekut jest zgodna z koljenoscia umieszczzenia tych rzeczy w pamięci
	



	Ulamek(const Ulamek &other): licznik(other.licznik), mianownik(other.mianownik), id(++cnt){
		cout<<"Ulamek(const Ulamek $other): "<<id<<endl;
	}
		 //konstruktor kopiujący, jako parametr dostaje referencje do innego ułamka, który ma skopiować, ma do			step do prywatnych obiektow, bo jest zdefiniowany w tej klasie
	
	~Ulamek(){
		cout<<"~Ulamek(): "<<id<<endl;
	}
	

	string toString()const{
		stringstream buff;
		buff << licznik << "/" << mianownik;
		return buff.str();
	}
						//const, bo nie zmienia obiektu;	
};
int Ulamek::cnt=0;


