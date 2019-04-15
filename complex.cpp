#include<iostream>
using namespace std;

class Complex {
  public:
    double r;
    double i;
    
    Complex(){
        this->r = 0;
        this->i = 0;
    }
    
    Complex(double r, double i){
        this->r = r;
        this->i = i;
    }
    
    Complex operator +(const Complex &c){
        return Complex(this->r+c.r, this->i + c.i);
    }
    
    Complex operator -(const Complex &c){
        return Complex(this->r - c.r, this->i - c.i);
    }
    
    Complex operator *(const Complex &c){
        return Complex((this-> r*c.r)-(this->i*c.i), (this->r*c.i)+(this->i*c.r));
    }
    
    Complex operator /(const Complex &c){
        return Complex((this->r*c.r+this->i*c.i)/(c.r*c.r+c.i*c.i), (c.r*this->i)/(c.r*c.r+c.i*c.i));
    }
    
  private:
    friend istream & operator>>(istream &s, Complex &c)
	{
 	s >> c.r;
        s >> c.i;
	return s;
   	 }
    
    
    
};

std::ostream & operator <<(std::ostream & s, const Complex &c){
        return s << "(" << c.r << "," << c.i << "i)";
}

int main(){
    Complex c1;
    Complex c2;
    cout<<"Wpisz współczynniki dwóch liczb zespolonych: ";
    cin >> c1;
    cin >> c2;
    
    cout << "pierwsza liczba zespolona to: " << c1 << endl;
    cout << "druga liczba zespolona to: " << c2 << endl;
    cout << "wynik dodawania to: " << c1 + c2 << endl;
    cout << "wynik odejmowania to: " << c1 - c2 << endl;
    cout << "wynik mnożenia to: " << c1 * c2 << endl;
    cout << "wynik dzielenia to: " << c1 / c2 << endl;
    
    

}
