//encapsulation - used to wrap up the data members and functions/(methods) into a sigle unit inside the class 


#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int roll;

    public:

    //get used to access the private variable
    string getname(){
       return name;

    }
    //set to access the private members of class
    void setname(string name){
         this->name = name;
    }

    int getage(){
       return age;

    }

    void setage(int age){
         this->age = age;

    }

    int getroll(){
        return roll;

    }

    void setroll(int roll){
        this->roll =roll;

    }

};
int main(){

    student obj;
    obj.setname("xyz");
    obj.setage(18);
    obj.setroll(87);

    //getting the output of the variable

    cout <<"name is:"<<obj.getname() <<endl;
     cout <<"age is:"<<obj.getage() <<endl;
      cout <<"roll is:"<<obj.getroll() <<endl;


      return 0;
      


}