#include<iostream>
#include "marsjanin.h"


int Marsjanin::cnt=0;
int Marsjanin::liczba_marsjan=0;

Marsjanin::Marsjanin():id(++cnt){++liczba_marsjan;}


Marsjanin::~Marsjanin(){--liczba_marsjan;}


void Marsjanin::atakuj(){
	
	if(liczba_marsjan>5){
		cout<<"Marsjanin nr "<<id<<" atakuje!"<<endl;
	}
	else{
		cout<<"Marsjanin nr "<<id<<" ukrywa się."<<endl;

	}
}


