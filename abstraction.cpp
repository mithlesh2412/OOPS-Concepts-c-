//abstraction - to show of the details without actually showing and revealing its implementation
// helps in data hiding ,implemented in class using access modifiers - public,private ,protected


#include <iostream>
using namespace std;
 class abstraction{
    private:
    int a;
    int b;

    public:
    void set(int x,int y){
         a=x;
        b =y;
    }

    void display(){
        cout <<"a =" <<a <<endl;
        cout <<"b =" <<b <<endl;
    }
 };

int main(){

    abstraction obj;
    obj.set(10,20);
    obj.display();
    return 0;
    

}