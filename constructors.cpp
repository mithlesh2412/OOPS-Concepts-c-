#include <iostream>
using namespace std;

class student {
    string name;
    int age;
    string course;

    public:
    //default constructor. ->> without parameters and arguments 
    student(){
       
        
    }

    //parameterized constructor  --> with the parameters and argument
    student(string n,int a ,string c){
         this ->name = n;
         this->age =a;
         this->course =c;

    }

    //copy constructor - -->copies values of one object’s data members into another object.

    student(student &obj){
        this->name = obj.name;
        this->age = obj.age;
        this->course = obj.course;

    }

    //public setter function 
    void setname(string n){
        name =n;
    }
    void setage(int a){
        age =a;

    }
    void setcourse(string c){
        course =c;

    }
    
    //function passing (method passing)
    void display(){
        cout <<"name is:" <<name <<endl;
        cout <<"age is"<<age <<endl;
        cout <<"course is"<<course <<endl;
        cout<< "---------------------" <<endl;
    }

};

int main(){
    //calling default constructor +setter function
    student s1;
    s1.setname ("sam");
    s1.setage(18);
    s1.setcourse("Btech");
     s1.display();

    //calling paramterized constructor
    student s2("XYZ",18,"Btech");
     s2.display();

    //copy constructor 
    student s3 =s1;
     s3.display();
   


}