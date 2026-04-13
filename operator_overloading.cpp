//operator overloading - it is a concept of compile time polymorphism in which a built operators like(+,-,*,/ etc) are used to overload  the userdefined functions like object of classes 

#include <iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout <<"Enter a no:"<<endl;
        cin >> a;
    }
    void putdata(){
        cout <<"value is:"<<a <<endl;

    }

    demo operator +(demo bb){
        demo cc;
        cc.a =a+bb.a;
        return cc;

    }
};

int main(){
  demo aa,bb,cc;
  aa.getdata();
  bb.getdata();
  cc = aa+bb;
  aa.putdata();
  bb.putdata();
  cc.putdata();

  return 0;
  


}