//friend class - a friend class is a speacial class that can access private and protected member of the other class
#include <iostream>
using namespace std;
class A{
    private:

    int x =5;
    friend class Y;


};
class Y{
    public:
    void show(A obj){
        cout<<"value of x :"<<obj.x <<endl;

    }
};
int main(){
    A a;
    Y b;
    b.show(a);

}

