//constructor overloading - ->more than one constructors with different parameters the matching parameter object is called 

#include <iostream>
using namespace std;

class clg{
    public:
    string name;
    int students;
    int bus;

    //default constructor with 0 parameters 
    clg(){

    }

    //parameterized constructor with 2 arguments
    clg(string n,int s){
        this->name =n;
        this->students =s;

    }

    //parameterized constructor with 3 arguments
    clg(string n,int s,int b){
        this->name =n;
        this->students =s;
        this ->bus =b;
    }

    //function calling to display the outcome;
    void display(){
        cout <<"name is "<<name <<endl;
        cout <<"student is"<<students <<endl;
        cout <<"No of Bus:"<<bus <<endl;
        cout <<"---------------------"<<endl;
    }


    
};
int main(){

    clg c1;
    c1.name ="maurya";
    c1.students =4444;

    c1.display();


    clg c2("ABC",450);
    c2.display();


    clg c3("XYZ",900,77);
    c3.display();



    return 0;




}