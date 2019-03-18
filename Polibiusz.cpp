#include<iostream>
#include<string>
#include<fstream>
using namespace std;


string PolibiusDecrypt(string);
string PolibiusEncrypt(string);


int main(int argc, char *argv[]){

	if(argc!=4){
		cout<<"Zla liczba parametrow!"<<endl;
		return -1;
	}
	
	
	ifstream myfile(argv[1]);
  	string word;
 	

	ofstream myfile2(argv[2]);
	
  	if(!myfile)
    	cout << "Nie można otworzyć pliku!" << endl;
 	
	myfile>>word;


	if(strcmp(argv[3],"1")==0){
		word=PolibiusEncrypt(word);
	}
	
	

	else if(strcmp(argv[3],"0")==0){
		word=PolibiusDecrypt(word);
	}
	
	
	else{
		cout<<"Podano nieprawidlowy parametr";
	
		return -1;
	}
		
	

	myfile2<<word;

 	myfile.close();
  	myfile2.close();
	return 0;
	
	
	
}


string PolibiusEncrypt(string word){


	
	

	int a=5; int b=5;
	
	char ** array = new char * [a];
	for(int i=0; i<a; i++){
		array[i] = new char [b];
	}
	
	

	char liczba='A';
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(liczba=='I'){
				liczba++;
			}

			array[i][j]=liczba;
			liczba++;
		}
	}
	
	
	string wynik;
	
	for(int i=0; i<word.size(); i++){
		if(word[i]=='I'){
			word[i]='J';
		}
		for(int j=0; j<5; j++){
			for(int k=0; k<5; k++){	
				if(array[j][k]==word[i]){
					wynik+=to_string(j+1);
					wynik+=to_string(k+1);
				}
			}
		}
	}
	return wynik;
			
}

string PolibiusDecrypt(string word){

	int a=5; int b=5;
	
	char ** array = new char * [a];
	for(int i=0; i<a; i++){
		array[i] = new char [b];
	}
	
	

	char liczba='A';
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(liczba=='I'){
				liczba++;
			}

			array[i][j]=liczba;
			liczba++;
		}
	}
	string wynik;
	
	for(int i=0; i<word.size(); i+=2){
		wynik+=array[word[i]-'1'][word[i+1]-'1'];		
	}
	
	return wynik;
}
			





