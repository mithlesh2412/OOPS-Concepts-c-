//overloading the prefix increment  operator(++obj)
#include <iostream>
using namespace std;

class Base{
    public:
    int length;
    int breadth;
    
    //constructor 
    Base(int l=0,int b=0){
        length =l;
        breadth=b;
        
    }
    
    //overloading  prefix increment operator
    Base operator ++(){
        ++length;
        ++breadth;
        return *this;
        
        
    }
    
    //postfix increment (obj++)
    Base operator ++(int){
        Base temp=*this;
        length++;
        breadth++;
        return temp;
        
    }
    //function to show
    void show(){
        cout <<"length is:"<<length<<" ,breadth is:"<<breadth <<endl;
        
    }
};
int main(){
    Base obj(5,4);
    
    cout <<"original value:\n";
    obj.show();
    
    cout <<"\nprefix increment(++obj)\n";
    ++obj;
    obj.show();
    
    cout <<"\n postfix increment(obj++)\n";
    obj++;
    obj.show();
    
    
    
    
    return 0;
    
    
}