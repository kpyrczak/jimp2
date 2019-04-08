#include<iostream>
#include<list>
#include "marsjanin.h"

#include<cstdlib>
using namespace std;

int main(){
	list<Marsjanin> lista;
	


	
	while(true){
		if (Marsjanin::liczba_marsjan==0 || rand()%2==0){
			lista.emplace_back();
		}
		else{
			lista.pop_back();
		}
		cout<<"Liczba marsjan wynosi: "<<Marsjanin::liczba_marsjan<<endl;
		for(auto &marsjanin : lista){
			marsjanin.atakuj();	
			cout<<marsjanin.cnt<<endl;
		}
	}
	
}
