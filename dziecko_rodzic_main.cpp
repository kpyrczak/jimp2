#include <iostream>
#include "zad4.h"
using namespace std;
#include<string>


int main(){
	Rodzic rodzic("Kasia", "P", 22);
	Dziecko dziecko("Jas", "P", 3, "Zlobek1");


	rodzic.setDziecko(&dziecko);
	
	rodzic.print();
	cout<<rodzic;

	string nowa_szkola;
	cout<<"Podaj nazwe nowej szkoly dziecka: "<<endl;
	cin>>nowa_szkola;

	rodzic.przepiszDoInnejSzkoly(nowa_szkola);
	rodzic.print();	
	cout<<rodzic;
}	
