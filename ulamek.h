#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ulamek{
private:
	int licznik, mianownik, id;
	static int cnt; 
public:
	Ulamek();
	 

	Ulamek(int l, int m);
	


	Ulamek(const Ulamek &other);
		
	~Ulamek();

	string toString()const;
						
};
