#include<iostream>
#include<string>
#include<sstream>
#include"ulamek.h"
using namespace std;


Ulamek::Ulamek(): licznik(0), mianownik(1), id(++cnt){
	cout<<"Ulamek(): "<<id<<endl;
}


Ulamek::Ulamek(int l, int m): licznik(l), mianownik(m), id(++cnt){
	cout<<"Ulamek(int,int): "<<id<<endl;
} 


Ulamek::Ulamek(const Ulamek &other): licznik(other.licznik), mianownik(other.mianownik), id(++cnt){
	cout<<"Ulamek(const Ulamek $other): "<<id<<endl;
}

Ulamek::~Ulamek(){
	cout<<"~Ulamek(): "<<id<<endl;
}


string Ulamek::toString()const{
	stringstream buff;
	buff << licznik << "/" << mianownik;
	return buff.str();
}
	

int Ulamek::cnt=0;


