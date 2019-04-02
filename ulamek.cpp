#include<iostream>
#include<string>
#include<sstream>
#include"ulamek.h"
using namespace std;


Ulamek::Ulamek(): licznik(0), mianownik(1), id(++cnt){
	cout<<"Ulamek(): "<<id<<endl;
}
//konstruktor, niczego nie zwraca, bezparametrowy, lista inicjalizacyjna




Ulamek::Ulamek(int l, int m): licznik(l), mianownik(m), id(++cnt){
	cout<<"Ulamek(int,int): "<<id<<endl;
} //konstruktor agregujacy
//inicjalizacja obiekut jest zgodna z koljenoscia umieszczzenia tych rzeczy w pamięci




Ulamek::Ulamek(const Ulamek &other): licznik(other.licznik), mianownik(other.mianownik), id(++cnt){
	cout<<"Ulamek(const Ulamek $other): "<<id<<endl;
}
//konstruktor kopiujący, jako parametr dostaje referencje do innego ułamka, który ma skopiować, ma do			step do prywatnych obiektow, bo jest zdefiniowany w tej klasie

Ulamek::~Ulamek(){
	cout<<"~Ulamek(): "<<id<<endl;
}


string Ulamek::toString()const{
	stringstream buff;
	buff << licznik << "/" << mianownik;
	return buff.str();
}
//const, bo nie zmienia obiektu;	

int Ulamek::cnt=0;


