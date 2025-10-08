#include <iostream>
#include <string.h>
using namespace std;

class smartphone{
    //private memebers
    string name;
    string model;
    int price;
    int dop;
//constructor calling 
public:
smartphone(string n,string m,int p,int d){
    this->name = n;
    this->model= m;
    this->price =p;
    this->dop =d;

}
//methods 

void display(){
    cout <<"name is:"<<name <<endl;
    cout <<"model is:"<<model <<endl;
    cout <<"price is:"<<price <<endl;
    cout <<"date of purchase is:"<<dop <<endl;


}

};

int main(){
    smartphone iphone("Apple","M4",1200,12);
    smartphone redmi("redmi","A600",1100,10);
    smartphone lava("Lava","M4",111,14);

    iphone.display();
    redmi.display();
    lava.display();
    
    return 0;



}