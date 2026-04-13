// Function overriding - concept of runtime polymorphism in which
// a derived class provides its own implementation of a function
// already defined in the base class.

#include <iostream>
using namespace std;

class Base {
public:
    string name;
    string dept;
    int age;
    int fee;

    Base(string n, string d, int a, int f) {
        this->name = n;
        this->dept = d;
        this->age = a;
        this->fee = f;
    }

    virtual void show() {  // virtual enables overriding
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Age: " << age << endl;
        cout << "Fee: " << fee << endl;
        cout << "This is the Base class function." << endl;
    }
};

// Derived class declared separately
class Derived : public Base {
public:
    string school;
    string course;
    int fee;

    // Derived constructor calls Base constructor
    Derived(string n, string d, int a, int baseFee, string s, string c, int f)
        : Base(n, d, a, baseFee) {
        this->school = s;
        this->course = c;
        this->fee = f;
    }

    void show() override {  // overriding base class function
        cout << "School: " << school << endl;
        cout << "Course: " << course << endl;
        cout << "Fee: " << fee << endl;
        cout << "This is the Derived class function." << endl;
    }
};

int main() {
    // Using Base pointer to demonstrate runtime polymorphism
    Base* ptr;
    Derived d1("Mithlesh", "CSE", 20, 40000, "GJU", "B.Tech", 45000);

    ptr = &d1;  // base pointer points to derived object
    ptr->show();  // derived class function called (runtime overriding)

    return 0;
}
