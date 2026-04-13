//virtual function overriding during using pointer 

#include <iostream>
using namespace std;

  class Base{
    public:
     virtual void show(){
        cout<<"I am a base class";
        
    }
};

class Derived:public Base{
    public:
    void show(){
        cout <<"I am derived class";
        
    }
    
};

int main(){
    Base*ptr;
    Derived d;
    ptr =&d;
    ptr->show();
}