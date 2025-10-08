#include <iostream>
#include <cstring> 

using namespace std;
class student{
    int age;
    char *names;
    public:

    student(int age,char *names){
        this->age =age;   //shallow copy

        this->names =new char[strlen(names)+1];
        strcpy(this->names,names);

    }
    void display(){
        cout <<"age" <<age <<endl;
        cout <<"names"<<names <<endl;
    }
};
int main(){
    student s1(18,"XYZ");
    s1.display();


    
}