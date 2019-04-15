#include<iostream>
#include<string>
#include<vector>
using namespace std;



class Student{
  public:
    string id;
    string first_name;
    string last_name;
    string programm;
    
    class StudyYear{
        public:
            int number;
            
            StudyYear & operator --(){
                --number;
                return *this;
            }
            
            StudyYear & operator ++(){
                ++number;
                return *this;
            }
            
            friend istream & operator >>(istream &s, StudyYear &year){
                return s>> year.number;
            }
            
            friend ostream & operator <<(ostream &s, const StudyYear &year){
                return s << year.number;
            }
            
            bool operator ==(const StudyYear & other)const{
                return this->number == other.number;
            }
            
            bool operator >(const StudyYear & other)const{
                return this->number > other.number;
            }
            
    }year;
    
    
    
    Student(): id("0"), first_name("Imie"), last_name("Nazwisko"), programm("Informatyka"), year{1}{}
    
    Student(string id, string first_name, string last_name, string programm, int number): id(id), first_name(first_name),
    last_name(last_name), programm(programm), year{number}{}
    

    friend istream & operator>>(istream &s, Student &student){
        return s >> student.id >> student.first_name >> student.last_name >> student.programm >> student.year.number;
        
    }


    friend ostream & operator <<(ostream & s, const Student &student){
        return s << "Student { " << "Id: " << student.id << ", first_name: " << student.first_name << ", last_name: " << student.last_name 
        << ", programm: " << student.programm << " year: " << student.year.number << " }";
    }
    
    bool operator == (const Student & other)const{
        return id == other.id && first_name == other.first_name && last_name==other.last_name && programm == other.programm && year==other.year;
    }
    
    
};


class StudentRepository{
    public:
    std::vector <Student> repository;
        
    friend ostream & operator <<(ostream &s, const StudentRepository & rep){
        s << "[ ";
        bool zmienna = false;
        for(auto &n : rep.repository){
            if(zmienna){
                    s << ", ";
            }
            zmienna = true;
            s << n;
        }
        s << " ]";
        return s;
    }
        
        friend istream & operator >>(istream &s, StudentRepository & rep){
            cout << "Podaj liczbe studentów w repozytorium: ";
            int n;
            s >> n;
            
            rep.repository.resize(n);
            for(auto &a: rep.repository){
                s >> a;
            }
            
        }
        
        Student & operator [](string id){
            for(auto &n : this->repository){
                if(id==n.id){
                    return n;
                    
                    
                }
            }
            
        }
};

int main(){
    Student s1,s2;
    
    cin >> s1;
    cout << s1 << endl;
    cin >> s2;
    cout << s2 << endl;
    cout << (s1.year>s2.year);
    //++s1.year;
    //cout << endl;
    //cout << s1;
    //cout << s1.year << endl;
    /*StudentRepository rep;
    cin >> rep;
    cout << rep << endl;
    cout << "Podaj id sudenta: ";
    string id;
    cin >> id;
    cout << rep[id] << endl; */
    
}
