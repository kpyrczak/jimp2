#include<iostream>
#include<string>
#include<sstream>
#include"ulamek.h"
using namespace std;


int main(){
	int a,b;
	
	cin>>a>>b;


	//inicjalizacja
	Ulamek u0; //u0{}
	Ulamek u1(a,b);
	Ulamek u2(u1);
	cout<<u2.toString()<<endl;
}	
		
	

