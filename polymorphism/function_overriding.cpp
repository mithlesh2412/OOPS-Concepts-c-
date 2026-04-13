//function overriding 
#include <iostream>
using namespace std;

class A{
    public:
    
    void show(){
        cout <<"I am base class"<<endl;
        
    }
};

class B:public A {
    public:
    void show(){
        cout <<"I am derived class" <<endl;
        
    }
};
    
    int main(){
        B b1;
        b1.show();
        
    }
    

