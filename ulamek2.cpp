#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ulamek{
private:
	int licznik, mianownik, id;
	static int cnt; 
public:
	Ulamek(): licznik(0), mianownik(1), id(++cnt){
		cout<<"Ulamek(): "<<id<<endl;
	}
	 




	Ulamek(int l, int m): licznik(l), mianownik(m), id(++cnt){
		cout<<"Ulamek(int,int): "<<id<<endl;
	} 


	Ulamek(const Ulamek &other): licznik(other.licznik), mianownik(other.mianownik), id(++cnt){
		cout<<"Ulamek(const Ulamek $other): "<<id<<endl;
	}
		 
	~Ulamek(){
		cout<<"~Ulamek(): "<<id<<endl;
	}
	

	string toString()const{
		stringstream buff;
		buff << licznik << "/" << mianownik;
		return buff.str();
	}
							
};
int Ulamek::cnt=0;


