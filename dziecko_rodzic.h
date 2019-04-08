#ifndef PROJECT_ZAD4_
#define PROJECT_ZAD4_
#include<iostream>
using namespace std;

class Dziecko;

class Rodzic{
	friend ostream & operator<<(ostream&S, const Rodzic& rodzic);

private:
	string imie;
	string nazwisko;
	int wiek;
	Dziecko* dziecko; 	
	
	
public:
	Rodzic(string imie, string nazwisko, int wiek, Dziecko* dziecko=nullptr);	
	void przepiszDoInnejSzkoly(string nazwa);
	void setDziecko(Dziecko *dziecko2);
	void print();




};


class Dziecko{
	friend class Rodzic;
	friend ostream &operator<<(ostream&S, const Dziecko& dziecko);

private:
	string imie;
	string nazwisko;
	int wiek;
	string szkola;


public:
	Dziecko(string imie, string nazwisko, int wiek, string szkola="szkola1");

	void print();

};








#endif	
