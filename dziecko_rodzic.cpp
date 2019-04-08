#include<iostream>
#include "zad4.h"


void Rodzic::przepiszDoInnejSzkoly(string nazwa){
	dziecko->szkola=nazwa;
	
}



Rodzic::Rodzic(string imie, string nazwisko, int wiek, Dziecko* dziecko)
	: imie(imie), nazwisko(nazwisko), wiek(wiek), dziecko(dziecko){}
void Rodzic::setDziecko(Dziecko *dziecko2){dziecko=dziecko2;}





Dziecko::Dziecko(string imie, string nazwisko, int wiek, string szkola)
	: imie(imie), nazwisko(nazwisko), wiek(wiek), szkola(szkola){}


void Rodzic::print(){
	cout<<"Rodzic.imie: "<<imie<<endl;
	cout<<"Rodzic.nazwisko: " <<nazwisko<<endl;
	cout<<"Wiek: "<<wiek<<endl;
	
	if (dziecko == nullptr){
		cout<<"Brak dziecka"<<endl;
	}
	else {
		dziecko->print();
	}
}

void Dziecko::print(){
	cout<<"Dziecko.imie: "<<imie<<endl;
	cout<<"Dziecko.nazwisko: "<<nazwisko<<endl;
	cout<<"Dziecko.wiek: "<<wiek<<endl;
	cout<<"Dziecko.szkola: "<<szkola<<endl;
	}



