#include <iostream>
using namespace std;

class A {
private:
    int length = 10;
    friend void show(A); // Friend function declaration
};

// Friend function definition
void show(A obj) {
    cout << "Length: " << obj.length << endl;
}

int main() {
    A a1;
    show(a1); // Calling friend function
    return 0;
}
