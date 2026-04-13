//operator overloading  - lets perform the overloading of decrement operator
#include <iostream>
using namespace std;

 class base{
     public:
     
     int length ;
     int breadth;
     
     //default+parameterised constructor 
     base(int l =0 ,int b=0){
         length =l;
         breadth=b;
         
     }
     
     //overloading the operator (-)
     base operator -(base obj){
         base temp;
         temp.length =length-obj.length;
         temp.breadth=breadth-obj.breadth;
         return temp;
         
     }
     
     //function to show the overloaded operator
     void show(){
         cout <<"length  is:"<<length <<endl;
         cout <<"breadth is:"<<breadth <<endl;
         cout <<"Addition is :" <<length+breadth <<endl;
         
     }
 };
 int main(){
     base a1(23,45);
     base a2(10,15);
     
     base a3 =a1-a2;
     a3.show();
     
     return 0;
     
 }