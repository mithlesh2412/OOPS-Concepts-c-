//distructor(~) -- > it deallocates the allocated memory of the object created during the constructor initialization

#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int sub;

    //constructor calling and allocating the memory
    student(string n,int a,int s){
        this->name =n;
        this->age =a;
        this->sub=s;
     cout <<"constructor called successfully" <<endl;
    }


    //function calling or method calling
    void display(){
        cout <<"name is"<<name <<endl;
        cout <<"age is"<<age <<endl;
        cout <<"sub is"<<sub <<endl;

    }

    //destructor calling to deallocate the memory location
    ~student(){
        
        cout <<"destructor called successfully" <<endl;

    }

};
int main(){

    student s1("xyz",18,5);
    s1.display();

    //destructor executes after allocating the memory




}