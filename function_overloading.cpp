// Function overloading is a concept of  compile time polymorphism in which
// more than one function with the same name but with different parameters are defined.
#include <iostream>
using namespace std;

class Gju {
public:
    string name;
    string dept;
    int strength;
    float fee;

    // Function overloading declaration
    void student_details(string n, string d, int s, float f) {
        this->name = n;
        this->dept = d;
        this->strength = s;
        this->fee = f;
    }

    // 2nd function with the same name but with different parameters
    void student_details(string n, string d, float f) {
        this->name = n;
        this->dept = d;
        this->strength = 0;  // default value when not provided
        this->fee = f;
    }

    void display() {
        cout << "Name is: " << name << endl;
        cout << "Dept is: " << dept << endl;
        cout << "Strength is: " << strength << endl;
        cout << "Fee is: " << fee << endl;
    }
};

int main() {
    Gju s1, s2;

    s1.student_details("Mithlesh", "CSE_Batch_2", 70, 40000);
    cout << "Student 1 details:\n" << endl;
    s1.display();

    cout << endl;

    s2.student_details("Harsh", "CSE_Batch_1", 4500);
    cout << "Student 2 details:\n" << endl;
    s2.display();

    return 0;
}
