// Template class - a template class is a blueprint for the datatypes int,float,double 
// when we create a templte class we do not need to create separate classes for datatypes  -- template class runns th

#include <iostream>
using namespace std;

template <class T>
class mydata{
    public:
     T value;
     
     //constructor
     public:
     mydata( T v){
         value =v;
         
     }
     
     //show function
     void show(){
         cout <<"value:"<<value <<endl;
         
     }
};
int main(){
    mydata <int>obj1(10);
    mydata <float>obj2(10.2);
    mydata <string>obj3("Hello");
    
    obj1.show();
    obj2.show();
    obj3.show();
    
    return 0;
}